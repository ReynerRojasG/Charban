#pragma once
#include "NodeMap.h"
#include "MediaPlayer.h"

class ListMap {
private:
    NodeMap* head;
    int rows;
    int columns;

public:
    ListMap(int pRows, int pColumns);
    ~ListMap();

    NodeMap* getHead();
    int getRows();
    int getColumns();

    void printGrid(int levelNum);
    void setCell(int row, int col, char val);
    NodeMap* getNodeAt(int row, int col);
    bool checkLevelComplete();
};
