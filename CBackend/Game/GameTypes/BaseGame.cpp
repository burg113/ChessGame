//
// Created by burg113 on 28.01.2023.
//

#include "BaseGame.h"

BaseGame::BaseGame() {
    this->boardState = getDefaultBoardState();
}
BaseGame::BaseGame(BoardState state) {
    this->boardState = state;
}

BoardState BaseGame::getDefaultBoardState() {
    std::vector<int> v;
    std::map<std::vector<int>,IPiece> map;
    v.push_back(8);
    v.push_back(8);
    BoardState state = BoardState(v, map);
    return state;
}

int BaseGame::getFieldSizeX() {
    this->getFieldSize(0);
}


int BaseGame::getFieldSizeY() {
    this->getFieldSize(1);
}