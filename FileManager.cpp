#include "FileManager.h"

FileManager::FileManager() {
    this->PlayerRow = 0;
    this->PlayerCol = 0;
    this->progressRoute = "progress.txt";
}

std::string FileManager::getLine(std::string fileName, int line) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << fileName << std::endl;
        return "";
    }

    std::string content;
    std::string currentLine;
    int currentLineNumber = 0;

    while (std::getline(file, currentLine)) {
        if (currentLineNumber == line) {
            content = currentLine;
            break;
        }
        currentLineNumber++;
    }

    file.close();
    return content;
}

void FileManager::saveProgress(int levelNum, std::vector<char> movements) {
    std::ofstream file(progressRoute, std::ios::out);
    if (!file.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << progressRoute << std::endl;
    }
    else {
        file << std::to_string(levelNum) << std::endl;
        std::string addThisLine = "";
        int cont = 0;
        for (char move : movements) {
            cont++;
            if (cont == movements.size()) {
                addThisLine += std::to_string(move) + ":";
            }
            else {
                addThisLine += std::to_string(move) + ",";
            }
        }

        file << addThisLine << std::endl;
        file.close();
    }
}

std::vector<char> FileManager::restart() {
    std::vector<char> movements;
    std::ifstream file(progressRoute);
    if (!file.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << progressRoute << std::endl;
    }

    std::string lineTwo = getLine(progressRoute, 1);
    std::stringstream ss(lineTwo);
    std::string token;
    char delimiter = ',';
    int asciiKey;

    while (std::getline(ss, token, delimiter)) {
        if (!token.empty() && token.back() == ':') {
            token.pop_back();
        }
        try {
            asciiKey = std::stoi(token);
            char asciiChar = static_cast<char>(asciiKey);
            movements.push_back(asciiChar);
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Error al convertir a entero: " << token << std::endl;
        }
    }
    return movements;
}
