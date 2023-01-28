//
// Created by burg113 on 28.01.2023.
//

#include "IPiece.h"
#include "IChessGame.h"
#include <vector>


IPiece::IPiece(IChessGame* game, std::vector<int> pos) {
    this->game = game;
    this->pos = game->getBoardState().posVecToIndex(pos) ;
}

IPiece::IPiece(IChessGame *game, int posIndex) {
    this->game = game;
    this->pos = posIndex;
}


std::vector<int> IPiece::getPosV(){
    return game->getBoardState().posIndexToVec(pos);
}

int IPiece::getPos() {
    return pos;
}


