#include "Box.h"

Box::Box(ListMap* gameMap) : map(gameMap) {}

bool Box::moveBox(char pDirection, NodeMap* boxPos) {
    NodeMap* newBoxPosition = getNewBoxPosition(pDirection, boxPos);

    if (newBoxPosition != nullptr && (newBoxPosition->element == ' ' || newBoxPosition->element == '.')) {
        if (boxRestrictions(newBoxPosition)) {
            if (newBoxPosition->element == '.') {
                newBoxPosition->element = '!';
            }
            else {
                newBoxPosition->element = '$';
            }

            if (boxPos->element == '!') {
                boxPos->element = '.';
            }
            else {
                boxPos->element = ' ';
            }
            return true;
        }
    }
    return false;
}

NodeMap* Box::getNewBoxPosition(char pDirection, NodeMap* boxPos) {
    switch (pDirection) {
    case 'w': return boxPos->up; case 'W': return boxPos->up; case 72: return boxPos->up;
    case 's': return boxPos->down; case 'S': return boxPos->down; case 80: return boxPos->down;
    case 'a': return boxPos->left; case 'A': return boxPos->left; case 75: return boxPos->left;
    case 'd': return boxPos->right; case 'D': return boxPos->right; case 77: return boxPos->right;
    default: return nullptr;
    }
}

bool Box::boxRestrictions(NodeMap* newPos) {
    if (newPos == nullptr || newPos->element == '#' || newPos->element == '$' || newPos->element == '!') {
        return false;
    }
    return true;
}

