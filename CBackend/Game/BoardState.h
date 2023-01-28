//
// Created by Lenn on 27.01.2023.
//

#ifndef CBACKEND_BOARDSTATE_H
#define CBACKEND_BOARDSTATE_H
#include <vector>
#include <map>
#include "IPiece.h"


class BoardState {
public:
    BoardState(std::vector<int> size, std::map<std::vector<int>,IPiece>);

public:
    std::vector<int> posIndexToVec(int i);
    int posVecToIndex(std::vector<int> i);
};


#endif //CBACKEND_BOARDSTATE_H
