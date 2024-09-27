#include "Player.h"

Player::Player() {
    position = nullptr;
    boxList = nullptr;
}

Player::Player(NodeMap* start, Box* boxes) : position(start), boxList(boxes) {
    position->element = '@';
}

void Player::movePlayer(char pDirection) {
    NodeMap* changePosition = position;

    if ((pDirection == 72 || pDirection == 'W' || pDirection == 'w') && position->up && position->up->element != '#' && position->up->element != '.' && position->up->element != '!') {
        changePosition = position->up;
    }
    else if ((pDirection == 80 || pDirection == 'S' || pDirection == 's') && position->down && position->down->element != '#' && position->down->element != '.' && position->down->element != '!') {
        changePosition = position->down;
    }
    else if ((pDirection == 75 || pDirection == 'A' || pDirection == 'a') && position->left && position->left->element != '#' && position->left->element != '.' && position->left->element != '!') {
        changePosition = position->left;
    }
    else if ((pDirection == 77 || pDirection == 'D' || pDirection == 'd') && position->right && position->right->element != '#' && position->right->element != '.' && position->right->element != '!') {
        changePosition = position->right;
    }

    if (changePosition != position) {
        if (changePosition->element == '$') {
            if (boxList->moveBox(pDirection, changePosition)) {
                position->element = ' ';
                position = changePosition;
                position->element = '@';
            }
            movements.push_back(pDirection);
        }
        else {
            position->element = ' ';
            position = changePosition;
            position->element = '@';
            movements.push_back(pDirection);
        }
    }
}

const std::vector<char>& Player::getMovements() {
    return movements;
}
