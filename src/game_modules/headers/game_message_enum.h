#ifndef GAME_MESSAGE_ENUM_H
#define GAME_MESSAGE_ENUM_H

enum GameMessageEnum {
    INPUT_WIDTH,
    INPUT_HEIGHT,
    INVALID_INPUT,
    INPUT_COORDINATE,
    INVALID_COORDINATE,
    RE_ENTER_COORDINATE,
    ATTACK_COORDINATE,
    SCANNER_COORDINATE,
    OPTION_LOAD_GAME,
    ATTACK_COORDINATE_OUT_OF_RANGE,
    INVALID_COORDINATE_FOR_ATTACK,
    LOSER,
    QUES_START_NEW_GAME,
    START_NEW_GAME,
    WINNER,
    QUES_START_NEW_ROUND,
    START_NEW_ROUND,
    INVALID_COORDINATE_FOR_SCANNER,
    SCANNER_COORDINATE_OUT_OF_RANGE,
    SCANNER_FOUND_SHIP,
    NO_SHIP_FOUND,
    SAVE,
    LOAD,
    EXIT
};

#endif