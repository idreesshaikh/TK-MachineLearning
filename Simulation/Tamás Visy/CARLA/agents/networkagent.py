import random

import numpy as np

from Networks.FlatDense import FlatDense
from Networks.CNNwDense import CNNwDense
from Networks.CNNwRNN import CNNwRNN
from Networks.LCNN import LCNN
from Networks.SCNN import SCNN
from ReinforcementModel import ReinforcementModel
from agents.agent import Agent
from settings import choices, choices_count, AGENT_IM_WIDTH, AGENT_IM_HEIGHT
from agents.state import get_feature_dimension
from support.logger import logger

feature_dimension = get_feature_dimension()
AGENT_MODEL_PATH = 'files/tensor.pt'
MODEL_TYPE = FlatDense


class NetworkAgent(Agent):

    def __init__(self):
        super().__init__()

        self.choices = choices

        self.model = ReinforcementModel(dim_features=get_feature_dimension, height=AGENT_IM_HEIGHT,
                                        width=AGENT_IM_WIDTH, n_actions=choices_count, model=MODEL_TYPE)

    def predict(self, state, pure=True, auto=False):
        if state is None:
            return None, None
        action = self.model.predict(state)
        try:
            # Copy value, not reference
            choice = self.choices[action][:]

            if pure is not True:
                choice[1] += -0.05 + random.random() / 10

            if pure is not True and auto is True:
                if action is 0:
                    choice[1] *= -1 * state.side
                if action is 1:
                    choice[1] *= 1 * state.side

            return action, choice
        except RuntimeError:
            logger.error(f'Error when trying to find right value for {action}')
            return None, None

    def train_on_memory(self, memory):
        x = 0
        r = [[], []]
        for (prev_state, action, new_state) in memory:
            x += 1
            reward = self.optimize(new_state, prev_state, action)
            r[action].append(reward)
        logger.info(f'Successfully trained {x} times')
        for i, action_rewards in enumerate(r):
            logger.info(f'Action rewards (ID, AVG, AMOUNT) '
                        f'-:- {i}; {np.average(action_rewards)}; {len(action_rewards)}')
        self.model.reset()
        self.save()

    def optimize(self, new_state, prev_state=None, action=None):
        try:
            return self.model.optimize(new_state, prev_state, action)
        except RuntimeError as r:
            logger.error(f'Error in model.optimize: {r}')

    def save(self, path=AGENT_MODEL_PATH):
        logger.info(f'Saving model to {path}')
        self.model.save_model(path)

    def load(self, path=AGENT_MODEL_PATH):
        logger.info(f'Loading model from {path}')
        try:
            self.model.load_model(path, dim_features=get_feature_dimension, image_height=AGENT_IM_HEIGHT,
                                  image_width=AGENT_IM_WIDTH, n_actions=choices_count, model=MODEL_TYPE)
        except FileNotFoundError as f:
            logger.error(f'Failed to find file at {path} - {f}')
        except RuntimeError as r:
            logger.critical(f'Failed to load agent from {path} - {r}')
