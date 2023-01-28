//
// Created by burg113 on 28.01.2023.
//

#ifndef CBACKEND_BASEGAME_H
#define CBACKEND_BASEGAME_H

#include "../IChessGame.h"

class BaseGame : public IChessGame{
public:
    BaseGame();

    BaseGame(BoardState state);


    int getFieldSizeX();
    int getFieldSizeY();

private:
    BoardState getDefaultBoardState();
};


#endif //CBACKEND_BASEGAME_H
