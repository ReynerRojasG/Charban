#pragma once
#include "Map.h"

class Box {
private:
    ListMap* map;

public:
    Box(ListMap* gameMap);

    bool moveBox(char pDirection, NodeMap* boxPos);
    NodeMap* getNewBoxPosition(char pDirection, NodeMap* boxPos);
    bool boxRestrictions(NodeMap* newPos);
};
