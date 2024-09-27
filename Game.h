#pragma once
#include <iostream>
#include "FileManager.h"
#include "Map.h"
#include "Player.h"
#include "Box.h"
#include "Views.h"
#include <sstream>
#include "MediaPlayer.h"

class Game {
public:
	MediaPlayer sounds;
	Views menu;
	void initializeMap(std::string FileName, FileManager flm, ListMap& map);
	void newGame(int levelNum, std::vector<char> p_Movements, bool restartMode);
	void reloadGame();
	void exitGame();
	void selectOption();
};
