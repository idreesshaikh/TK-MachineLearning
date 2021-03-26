import logging
WRITE_FILE = True
LEVEL = logging.INFO

logFormatter = logging.Formatter('%(asctime)s\t  [%(threadName)s]\t[%(levelname)-3.3s]:\t%(message)s',
                                 '%Y.%m.%d %H:%M:%S')
logger = logging.getLogger('carla_logger')
logger.level = LEVEL

consoleHandler = logging.StreamHandler()
consoleHandler.setFormatter(logFormatter)
logger.addHandler(consoleHandler)

if WRITE_FILE:
    logger.info('Writing logs to file')
    file_found = True
    try:
        fileHandler = logging.FileHandler('files/carla.log')
    except FileNotFoundError:
        fileHandler = logging.FileHandler('carla.log')

    fileHandler.setFormatter(logFormatter)
    logger.addHandler(fileHandler)
    if fileHandler.baseFilename.find('files\\carla.log') == -1:
        logger.error('Log parent directory \'files\' not found')
else:
    logger.warning('Not writing logs to file')
