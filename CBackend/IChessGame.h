//
// Created by Lenn on 27.01.2023.
//

#ifndef CBACKEND_ICHESSGAME_H
#define CBACKEND_ICHESSGAME_H

#include "Boardstate.h"
#include <iostream>


/**
 * interface for the chess backend
 *
 */
class IChessGame {

    virtual int move(int piece,int pos);

    virtual int move(int piece,int x, int y);

    virtual Boardstate getBoardState();

    virtual int getFieldSizeX();
    virtual int getFieldSizeY();

    virtual std::vector<int> getBoardState();

};


#endif //CBACKEND_ICHESSGAME_H
