#include "Game.h"
void Game::initializeMap(std::string FileName, FileManager flm, ListMap& map)
{
	std::string token;
	char delimiter = ',';
	char endMarker = ':';
	for (int i = 0; i < 20; ++i) {
		std::string input = flm.getLine(FileName, i);
		std::istringstream stream(input);
		int counter = 0;
		while (std::getline(stream, token, delimiter)) {
			for (char c : token) {
				if (c == endMarker) {
					break;
				}
				else {
					map.setCell(i, counter, c);
					counter++;
				}
			}
		}
	}
}

void Game::newGame(int levelNum, std::vector<char> p_Movements, bool restartMode)
{
	int levelNum2 = levelNum;
	bool autoPlay = false;
	Player bot;
	while (true) {
		const int numRows = 20;
		const int numCols = 20;
		bool flag = false;
		bool flag2 = false;
		ListMap map(numRows, numCols);
		Box boxes(&map);
		FileManager flm;
		Player auxPlayer;
		if (autoPlay == true) {
			levelNum = levelNum - 1;
		}
		if (levelNum <= 5) {
			system("cls");
			initializeMap("Level" + std::to_string(levelNum) + ".txt", flm, map);
		}
		else {
			menu.exit();
			std::cout << "\t\t\t\t\t Completaste la mazmorra. Felicidades!\n";
			system("pause");
			break;
		}

		switch (levelNum)
		{
		case 1: {
			sounds.play(L"Lev1.wav");
			//cajas
			map.setCell(8, 8, '$');
			//metas
			map.setCell(8, 13, '.');
			//jugador
			Player player(map.getNodeAt(15, 3), &boxes);
			auxPlayer = player;
			break;
		}
		case 2: {
			sounds.play(L"Lev2.wav");
			//cajas
			map.setCell(2, 2, '$');
			map.setCell(6, 4, '$');
			map.setCell(8, 5, '$');
			map.setCell(10, 7, '$');
			map.setCell(3, 9, '$');
			map.setCell(3, 11, '$');
			map.setCell(4, 13, '$');
			map.setCell(7, 15, '$');
			//metas
			map.setCell(2, 1, '.');
			map.setCell(4, 3, '.');
			map.setCell(4, 5, '.');
			map.setCell(6, 7, '.');
			map.setCell(6, 9, '.');
			map.setCell(8, 11, '.');
			map.setCell(8, 13, '.');
			map.setCell(10, 15, '.');
			//jugador
			Player player(map.getNodeAt(2, 9), &boxes);
			auxPlayer = player;
			break;
		}
		case 3: {
			sounds.play(L"Lev3.wav");
			//cajas
			map.setCell(6, 7, '$');
			map.setCell(6, 8, '$');
			map.setCell(6, 11, '$');
			map.setCell(7, 11, '$');
			//metas
			map.setCell(6, 4, '.');
			map.setCell(14, 13, '.');
			map.setCell(2, 13, '.');
			map.setCell(11, 15, '.');
			//jugador
			Player player(map.getNodeAt(2, 5), &boxes);
			auxPlayer = player;
			break;
		}
		case 4: {
			sounds.play(L"Lev4.wav");
			//cajas
			map.setCell(3, 6, '$');
			map.setCell(3, 8, '$');
			map.setCell(3, 9, '$');
			map.setCell(5, 11, '$');
			map.setCell(6, 17, '$');
			map.setCell(13, 11, '$');
			//metas
			map.setCell(1, 13, '.');
			map.setCell(2, 13, '.');
			map.setCell(5, 6, '.');
			map.setCell(2, 15, '.');
			map.setCell(8, 11, '.');
			map.setCell(9, 9, '.');
			//jugador
			Player player(map.getNodeAt(3, 5), &boxes);
			auxPlayer = player;
			break;
		}
		case 5: {
			sounds.play(L"Lev5.wav");
			//cajas
			map.setCell(4, 3, '$');
			map.setCell(5, 4, '$');
			map.setCell(5, 7, '$');
			map.setCell(5, 8, '$');
			map.setCell(9, 3, '$');
			map.setCell(9, 7, '$');
			map.setCell(10, 6, '$');
			map.setCell(11, 7, '$');
			map.setCell(10, 10, '$');
			map.setCell(6, 17, '$');
			//metas
			map.setCell(1, 13, '.');
			map.setCell(1, 17, '.');
			map.setCell(3, 14, '.');
			map.setCell(4, 14, '.');
			map.setCell(5, 14, '.');
			map.setCell(6, 14, '.');
			map.setCell(7, 15, '.');
			map.setCell(10, 18, '.');
			map.setCell(11, 18, '.');
			map.setCell(12, 17, '.');

			//jugador
			Player player(map.getNodeAt(5, 16), &boxes);
			auxPlayer = player;
			break;
		}
		}

		if (autoPlay == true) {
			sounds.play(L"pinpin.wav");
		}

		map.printGrid(levelNum);

		if (autoPlay == true) {
			//Logica
			const auto& movements = bot.getMovements();
			for (char move : movements) {
				system("cls");
				auxPlayer.movePlayer(move);
				map.printGrid(levelNum);
				menu.delay(150);
				system("cls");
			}
			system("pause");
			autoPlay = false;
			levelNum++;
		}
		else {
			if (restartMode == true) {
				const auto& restartMove = p_Movements;
				for (char move : p_Movements) {
					system("cls");
					auxPlayer.movePlayer(move);
					map.printGrid(levelNum);
					restartMode = false;
				}
			}

			while (true) {
				if (_kbhit()) {
					char direccion = _getch();

					if (direccion == 'q' || direccion == 'Q') {
						menu.dead();
						const auto& movementsRestart = auxPlayer.getMovements();
						flm.saveProgress(levelNum, movementsRestart);
						flag2 = true;
						break;
					}
					if (direccion == 'm' || direccion == 'M') {
						sounds.stop();
					}
					if (direccion == 'r' || direccion == 'R') {
						menu.dead();
						break;
					}
					auxPlayer.movePlayer(direccion);

					system("cls");
					map.printGrid(levelNum);
					flag = map.checkLevelComplete();
					if (flag) {
						menu.delay(600);
						system("pause");
						levelNum++;
						break;
					}

				}
			}
		}
		if (flag2 != true && flag == true) {
			autoPlay = menu.autoPlay();
		}
		if (autoPlay == true) {
			bot = auxPlayer;
		}
		if (flag2) {
			break;
		}
	}
}

void Game::reloadGame()
{
	FileManager flmRestart;
	const auto& restartMove = flmRestart.restart();
	std::string actualLine = flmRestart.getLine("progress.txt", 0);
	int levelNum = stoi(actualLine);
	newGame(levelNum, restartMove, true);
}

void Game::exitGame()
{
	sounds.stop();
	menu.exit();
	std::cout << "\t\t\t\t\t       \033[38;5;226mSaliste de la mazmorra." << std::endl;
	std::cout << "\t\t\t\t\t\033[38;5;051m";
	system("pause");
	sounds.play(L"Leave.wav");
	menu.delay(450);
	exit(0);
}

void Game::selectOption()
{
	int opcion = 0;
	std::vector<char> movements;
	while (opcion != 4) {
		opcion = menu.showMenu();
		system("cls");
		switch (opcion) {
		case 1:
			newGame(1, movements, false);
			break;
		case 2:
			reloadGame();
			break;
		case 3:
			menu.controlsInfo();
			break;
		case 4:
			exitGame();
			break;
		default:
			std::cout << "Opcion no valida" << std::endl;
		}
	}
}
