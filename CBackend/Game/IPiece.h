//
// Created by burg113 on 28.01.2023.
//
#ifndef CBACKEND_IPIECE_H
#define CBACKEND_IPIECE_H

#include <vector>

// forward declaration of class to forgo circular import      (?!)
class IChessGame;

class IPiece {
private:
    IChessGame* game;
    int uuid;

    int pos;

public:
    IPiece(IChessGame* game, std::vector<int> pos);

    IPiece(IChessGame *game, int posIndex);

    std::vector<int> getPosV();

    int getPos();

    virtual std::vector<int> possibleMoves();

    virtual std::vector<int> possibleMoves(int pos);

};


#endif //CBACKEND_IPIECE_H
