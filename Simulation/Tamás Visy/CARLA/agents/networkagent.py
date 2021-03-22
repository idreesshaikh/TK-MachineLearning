from ReinforcementModel import ReinforcementModel
from agents.agent import Agent
from sensors import recently, limit_range
from support.datakey import DataKey
from support.image_manipulation import im_resize
import numpy as np
import math
from support.logger import logger

feature_dimension = 8
AGENT_IM_HEIGHT = 32
AGENT_IM_WIDTH = 32
ACTIONS_NUM = 4
AGENT_MODEL_PATH = 'files/tensor.pt'


class NetworkAgent(Agent):
    def __init__(self):
        super().__init__()
        self.model = ReinforcementModel(dim_features=feature_dimension, height=AGENT_IM_HEIGHT,
                                        width=AGENT_IM_WIDTH, n_actions=ACTIONS_NUM)
        self.model.summary()

    def predict(self, state):
        if state is None:
            return None
        p = self.model.predict(state)
        if p is 0:
            return 0.4, -0.4
        if p is 1:
            return 0.6, -0.1
        if p is 2:
            return 0.6, 0.1
        if p is 3:
            return 0.4, 0.4
        logger.error(f'Could not find right value for {p}')
        return None

    def optimize(self, new_state):
        try:
            self.model.optimize(new_state)
        except RuntimeError as r:
            logger.error(f'Error in model.optimize: {r}')

    def save(self, path=AGENT_MODEL_PATH):
        logger.info(f'Saving model to {path}')
        self.model.save_model(path)

    def load(self, path=AGENT_MODEL_PATH):
        logger.info(f'Loading model from {path}')
        try:
            self.model.load_model(path, dim_features=feature_dimension, image_height=AGENT_IM_HEIGHT,
                                  image_width=AGENT_IM_WIDTH, n_actions=ACTIONS_NUM)
        except FileNotFoundError as f:
            logger.error(f'Failed to find file at {path} - {f}')
        except RuntimeError as r:
            logger.critical(f'Failed to load agent from {path} - {r}')

    # rotation matrices used in calculating car subjective acceleration
    @staticmethod
    def __Rx(theta):
        return np.matrix([[1, 0, 0],
                          [0, math.cos(theta), -math.sin(theta)],
                          [0, math.sin(theta), math.cos(theta)]])

    @staticmethod
    def __Ry(theta):
        return np.matrix([[math.cos(theta), 0, math.sin(theta)],
                          [0, 1, 0],
                          [-math.sin(theta), 0, math.cos(theta)]])

    @staticmethod
    def __Rz(theta):
        return np.matrix([[math.cos(theta), -math.sin(theta), 0],
                          [math.sin(theta), math.cos(theta), 0],
                          [0, 0, 1]])

    @staticmethod
    def unpack(data, line):
        ca = data.get(DataKey.SENSOR_CAMERA)
        r = data.get(DataKey.SENSOR_RADAR)
        co = data.get(DataKey.SENSOR_COLLISION)
        v = data.get(DataKey.SENSOR_VELOCITY)
        a = data.get(DataKey.SENSOR_ACCELERATION)
        p = data.get(DataKey.SENSOR_POSITION)
        di = data.get(DataKey.SENSOR_DIRECTION)
        o = data.get(DataKey.SENSOR_OBSTACLE)
        if p is not None:
            d = line.distance([p[0], p[1]])
        else:
            d = None
        return ca, r, co, v, a, p, di, o, d

    @staticmethod
    def convert(state):
        """Converts incoming data into the format the agent accepts"""
        camera, radar, collision, velocity, acceleration, position, direction, obstacle, distance = state

        # TODO (2) check if all conversions are needed

        # SENSOR: unit, format

        # camera: -, image (as numpy array ?)
        camera = im_resize(camera, (AGENT_IM_HEIGHT, AGENT_IM_WIDTH))
        # Removing colors
        # camera = im_grayscale(camera)  # when grayscaling also change shape?
        # Reshaping for NN
        if camera is not None:
            camera = np.reshape(camera, [3, AGENT_IM_HEIGHT, AGENT_IM_WIDTH])

        # radar: m, (float ?) - Can be None (if no valid measurement has occurred, or if the point is outside our range)
        radar = limit_range(radar)
        if radar is None:
            radar = 100.0  # Radar always some number

        # velocity: m/s, [v_x, v_y, v_z] (floats?)
        # Velocity is now converted to 1D (float)
        if velocity is None:
            velocity = 0.0
        else:
            velocity = (velocity[0] ** 2 + velocity[1] ** 2) ** 0.5

        # acceleration: m/s2, [a_x, a_y, a_z] (floats?)
        # at first direction and acceleration is None
        if direction is None:
            direction = [0, 0, 0]

        if acceleration is None:
            acceleration = [0, 0, 0]

        acceleration = (NetworkAgent.__Ry(direction[1]) @ NetworkAgent.__Rz(direction[2]) @ NetworkAgent.__Rx(
            direction[0])).T @ np.reshape(acceleration, [3, 1])

        # position: m, [x, y, z, pitch, yaw, roll] (floats?)

        # collision: bool, was collision registered? - None if never, False or True if (not) in the last 1.0* second
        collision = recently(collision)
        if collision is None:
            collision = False  # Collision always TRUE/FALSE

        # obstacle: bool, was obstacle registered? - None if never, False or True if (not) in the last 1.0* second
        obstacle = recently(obstacle)
        if obstacle is None:
            obstacle = False  # Obstacle always TRUE/FALSE

        important = camera, velocity, acceleration, position
        if not any(map(lambda x: x is None, important)):
            # Order is important for:
            # from State import State
            # State
            return camera, radar, collision, velocity, acceleration, position, obstacle, distance
        else:
            return None
