#pragma once
#include "NodeMap.h"
#include "Box.h"
#include <vector>

class Player {
private:
    NodeMap* position;
    Box* boxList;
    std::vector<char> movements;

public:
    Player();
    Player(NodeMap* start, Box* boxes);

    void movePlayer(char pDirection);
    const std::vector<char>& getMovements();
};
