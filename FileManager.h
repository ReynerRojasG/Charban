#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class FileManager {
private:
    int PlayerRow;
    int PlayerCol;
    std::string progressRoute;

public:
    FileManager();

    std::string getLine(std::string fileName, int line);

    void saveProgress(int levelNum, std::vector<char> movements);

    std::vector<char> restart();
};
