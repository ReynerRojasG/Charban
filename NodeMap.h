#pragma once

struct NodeMap {
    char element;  
    NodeMap* up;
    NodeMap* down;
    NodeMap* left;
    NodeMap* right;

    NodeMap(char e) : element(e), up(nullptr), down(nullptr), left(nullptr), right(nullptr) {}
};