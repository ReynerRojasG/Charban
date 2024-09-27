#include "Map.h"
#include <iostream>
#include "windows.h"

ListMap::ListMap(int pRows, int pColumns) : rows(pRows), columns(pColumns), head(nullptr) {
    NodeMap*** grid = new NodeMap * *[rows]; // Inicializa una matriz de punteros
    for (int i = 0; i < rows; i++) {
        grid[i] = new NodeMap * [columns];
        for (int j = 0; j < columns; j++) {
            grid[i][j] = new NodeMap(' ');
        }
    }

    // Inicializa las posiciones de la lista con respecto a la matriz
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i > 0) grid[i][j]->up = grid[i - 1][j];
            if (i < rows - 1) grid[i][j]->down = grid[i + 1][j];
            if (j > 0) grid[i][j]->left = grid[i][j - 1];
            if (j < columns - 1) grid[i][j]->right = grid[i][j + 1];
        }
    }

    head = grid[0][0]; // Inicializa la cabeza 
    for (int i = 0; i < rows; i++) {
        delete[] grid[i];
    }
    delete[] grid;
}

ListMap::~ListMap() {
    NodeMap* rowStart = head;
    while (rowStart != nullptr) {
        NodeMap* current = rowStart;
        rowStart = rowStart->down;

        while (current != nullptr) {
            NodeMap* temp = current;
            current = current->right;
            delete temp;
        }
    }
}

NodeMap* ListMap::getHead() {
    return head;
}

int ListMap::getRows() {
    return rows;
}

int ListMap::getColumns() {
    return columns;
}

void ListMap::printGrid(int levelNum) {
    std::cout << "\033[38;5;226m";//amarillo
    std::cout << "\t\t\t\t\t\t      >-(Nivel " << levelNum << ")-<" << std::endl;
    std::cout << std::endl;
    NodeMap* rowStart = head;
    while (rowStart != nullptr) {
        NodeMap* current = rowStart;
        std::cout << "\t\t\t\t\t  ";
        while (current != nullptr) {
            if (current->element == '$') {
                std::cout << "\033[38;5;051m";//turqueza 
            }
            else if (current->element == '.') {
                std::cout << "\033[38;5;196m";//naranja
            }
            else if (current->element == '!') {
                std::cout << "\033[38;5;031m";//azul
            }
            else if (current->element == '@') {
                std::cout << "\033[38;5;226m";//amarillo
            }
            else {
                std::cout << "\033[38;5;128m";//morado
            }
            std::cout << current->element << ' ';
            current = current->right;
        }
        std::cout << std::endl;
        rowStart = rowStart->down;
    }
    std::cout << "\033[38;5;183m";//morado claro
}

void ListMap::setCell(int row, int col, char val) {
    NodeMap* current = getNodeAt(row, col);
    if (current) {
        current->element = val;
    }
}

NodeMap* ListMap::getNodeAt(int row, int col) {
    if (row < 0 || col < 0 || row >= rows || col >= columns) {
        return nullptr;
    }

    NodeMap* current = head;

    for (int i = 0; i < row && current != nullptr; i++) {
        current = current->down;
    }
    for (int j = 0; j < col && current != nullptr; j++) {
        current = current->right;
    }
    return current;
}

bool ListMap::checkLevelComplete() {
    NodeMap* rowStart = head;
    while (rowStart != nullptr) {
        NodeMap* current = rowStart;
        while (current != nullptr) {
            if (current->element == '.') {
                return false;
            }
            current = current->right;
        }
        rowStart = rowStart->down;
    }
    MediaPlayer sound;
    std::cout << "Nivel completado" << std::endl;
    sound.play(L"Win.wav");
    return true;
}
