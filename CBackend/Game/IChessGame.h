//
// Created by Lenn on 27.01.2023.
//

#ifndef CBACKEND_ICHESSGAME_H
#define CBACKEND_ICHESSGAME_H
#include <iostream>
#include <vector>
#include "BoardState.h"

/**
 * interface for the chess backend
 *
 */
class IChessGame {
protected:
    IChessGame();

    BoardState boardState;
public:
    virtual int move(int piece,int pos);

    virtual int move(int piece,int x, int y);

    virtual BoardState getBoardState();

    virtual int getFieldSize(int axis);

};


#endif //CBACKEND_ICHESSGAME_H
