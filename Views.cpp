#include "Views.h"

void Views::delay(int milliseconds)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

void Views::charBan()
{
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
}

void Views::menuVariants(int opt)
{
	system("cls");
	std::cout << "\n";
	std::cout << "\033[38;5;226m";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
	switch (opt)
	{
	case 1: {
		std::cout << "\033[38;5;128m";
		std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
		std::cout << "\033[38;5;226m";
		std::cout << "\n\t\t\t\t\t          -(Juego Nuevo)-" << std::endl << std::endl;
		std::cout << "\033[38;5;128m";
		std::cout << "\n\t\t\t\t\t          Cargar Partida" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t            Como Jugar" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t               Salir" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
		break; }
	case 2: {
		std::cout << "\033[38;5;128m";
		std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t            Juego Nuevo" << std::endl << std::endl;
		std::cout << "\033[38;5;226m";
		std::cout << "\n\t\t\t\t\t        -(Cargar Partida)-" << std::endl << std::endl;
		std::cout << "\033[38;5;128m";
		std::cout << "\n\t\t\t\t\t            Como Jugar" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t               Salir" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
		break; }
	case 3: {
		std::cout << "\033[38;5;128m";
		std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t            Juego Nuevo" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t          Cargar Partida" << std::endl << std::endl;
		std::cout << "\033[38;5;226m";
		std::cout << "\n\t\t\t\t\t          -(Como Jugar)-" << std::endl << std::endl;
		std::cout << "\033[38;5;128m";
		std::cout << "\n\t\t\t\t\t               Salir" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
		break; }
	case 4: {
		std::cout << "\033[38;5;128m";
		std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t            Juego Nuevo" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t          Cargar Partida" << std::endl << std::endl;
		std::cout << "\n\t\t\t\t\t            Como Jugar" << std::endl << std::endl;
		std::cout << "\033[38;5;226m";
		std::cout << "\n\t\t\t\t\t             -(Salir)-" << std::endl << std::endl;
		std::cout << "\033[38;5;128m";
		std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
		break; }
	}
	std::cout << "O\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tO" << std::endl;
	std::cout << "O0\t\t\t\t\t\t\t\t\t\t\t\t\t\t      0O" << std::endl;
	std::cout << "0OO\t\t\t\t\t\t\t\t\t\t\t\t\t\t     OO0" << std::endl;
	std::cout << "O00O\t\t\t\t\t\t\t\t\t\t\t\t\t\t    O00O";
}

void Views::title()
{
	int ms = 250;
	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  \n";
	std::cout << "\t\t\t ##    ## \n";
	std::cout << "\t\t\t##        \n";
	std::cout << "\t\t\t##        \n";
	std::cout << "\t\t\t##        \n";
	std::cout << "\t\t\t ##    ## \n";
	std::cout << "\t\t\t  ######  \n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##\n";
	std::cout << "\t\t\t ##    ## ##     ##\n";
	std::cout << "\t\t\t##        ##     ##\n";
	std::cout << "\t\t\t##        #########\n";
	std::cout << "\t\t\t##        ##     ##\n";
	std::cout << "\t\t\t ##    ## ##     ##\n";
	std::cout << "\t\t\t  ######  ##     ##\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## \n";
	std::cout << "\t\t\t##        ######### ######## \n";
	std::cout << "\t\t\t##        ##     ## ##    ## \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## \n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## \n";
	std::cout << "\t\t\t##        ######### ######## ########  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## \n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ## \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  \n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ## \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ##\n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ########\n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ##\n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ##\n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ##\n";
	delay(ms);
	charBan();
	delay(ms + 200);
	music.play(L"Start.wav");
	//colores
	std::cout << "\033[38;5;208m";
	charBan();
	std::cout << "\n\t\t\t\t\t\t       O o o\n";
	delay(ms + 150);
	std::cout << "\033[38;5;196m";
	charBan();
	std::cout << "\n\t\t\t\t\t\t       o O o\n";
	delay(ms + 150);
	std::cout << "\033[38;5;226m";
	charBan();
	std::cout << "\n\t\t\t\t\t\t       o o O\n";
	delay(ms + 300);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
	delay(ms - 150);
	system("cls");
	std::cout << "\n\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
	delay(ms - 150);
	system("cls");
	std::cout << "\n\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
	delay(ms - 150);
	system("cls");
	std::cout << "\n\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
	delay(ms - 150);
	system("cls");
	std::cout << "\n\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
	delay(ms - 150);
	system("cls");
	std::cout << "\n\n";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
	delay(ms - 150);
}

int Views::showMenu()
{
	int opt = 1;
	system("cls");
	music.play(L"Title.wav");
	std::cout << "\n";
	std::cout << "\033[38;5;226m";
	std::cout << "\t\t\t  ######  ##     ##   ####   ########  ########    ####   ##    ##  \n";
	std::cout << "\t\t\t ##    ## ##     ##  ##  ##  ##     ## ##     ##  ##  ##  ###   ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ####  ##  \n";
	std::cout << "\t\t\t##        ######### ######## ########  ########  ######## ## ## ##  \n";
	std::cout << "\t\t\t##        ##     ## ##    ## ##     ## ##     ## ##    ## ##  ####  \n";
	std::cout << "\t\t\t ##    ## ##     ## ##    ## ##     ## ##     ## ##    ## ##   ###  \n";
	std::cout << "\t\t\t  ######  ##     ## ##    ## ##     ## ########  ##    ## ##    ##  \n";
	std::cout << "\033[38;5;128m";//Morado
	std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
	std::cout << "\033[38;5;226m";//Amarillo
	std::cout << "\n\t\t\t\t\t          -(Juego Nuevo)-" << std::endl << std::endl;
	std::cout << "\033[38;5;128m";
	std::cout << "\n\t\t\t\t\t          Cargar Partida" << std::endl << std::endl;
	std::cout << "\n\t\t\t\t\t            Como Jugar" << std::endl << std::endl;
	std::cout << "\n\t\t\t\t\t               Salir" << std::endl << std::endl;
	std::cout << "\n\t\t\t\t\t       o--O---o--0--o---O--o" << std::endl << std::endl;
	std::cout << "O\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tO" << std::endl;
	std::cout << "O0\t\t\t\t\t\t\t\t\t\t\t\t\t\t      0O" << std::endl;
	std::cout << "0OO\t\t\t\t\t\t\t\t\t\t\t\t\t\t     OO0" << std::endl;
	std::cout << "O00O\t\t\t\t\t\t\t\t\t\t\t\t\t\t    O00O";
	while (true) {
		if (_kbhit()) {
			char direccion = _getch();

			if (direccion == 'w' || direccion == 'W' || direccion == 72) {
				if (opt == 1) {
					opt = 4;
				}
				else {
					opt--;
				}
				menuVariants(opt);
			}
			if (direccion == 's' || direccion == 'S' || direccion == 80) {
				if (opt == 4) {
					opt = 1;
				}
				else {
					opt++;
				}
				menuVariants(opt);
			}
			if (direccion == 13) {
				if (opt == 4) {
					break;
				}
				else {
					music.stop();
					music.play(L"Enter.wav");
					transition();
					break;
				}

			}
		}
	}
	return opt;
}

void Views::controlsInfo()
{
	music.play(L"Info.wav");
	int salir = 0;
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "\n\t\t\t\t\t\tO-| Controles del Juego |-O \n" << std::endl;
	std::cout << "\033[38;5;202m";//naranja
	std::cout << "\t   O---o--o--o--o--o--o--o--o--o--o--o--o--o--o--o--0--o--o--o--o--o--o--o--o--o--o--o--o--o--o--o---O\n" << std::endl;
	std::cout << "\033[38;5;128m";//morado
	std::cout << "\t      #########     #########     #########     #########     #########     #########     #########" << std::endl;
	std::cout << "\t      #       #     #       #     #       #     #       #     #       #     #       #     #       #" << std::endl;
	std::cout << "\t      #   W   #     #   S   #     #   D   #     #   A   #     #   Q   #     #   M   #     #   R   #" << std::endl;
	std::cout << "\t      #       #     #       #     #       #     #       #     #       #     #       #     #       #" << std::endl;
	std::cout << "\t      #########     #########     #########     #########     #########     #########     #########" << std::endl;
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "\t       Arriba         Abajo        Derecha      Izquierda       Salir       Silenciar     Reiniciar\n";
	std::cout << "\033[38;5;202m";//naranja
	std::cout << "\n\t   O---o--o--o--o--o--o--o--o--o--o--o--o--o--o--o--0--o--o--o--o--o--o--o--o--o--o--o--o--o--o--o---O\n" << std::endl;
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "\n\t\t\t\t\t\tO-| Controles del Menu |-O \n" << std::endl;
	std::cout << "\033[38;5;202m";//naranja
	std::cout << "\t\t\t\t    O--o--o--o--o--o--o--o--0--o--o--o--o--o--o--o--O\n" << std::endl;
	std::cout << "\033[38;5;128m";//morado
	std::cout << "\t\t\t\t      #########     #########     ##################" << std::endl;
	std::cout << "\t\t\t\t      #       #     #       #     #             |  #" << std::endl;
	std::cout << "\t\t\t\t      #   W   #     #   S   #     #   Enter   <-+  #" << std::endl;
	std::cout << "\t\t\t\t      #       #     #       #     #                #" << std::endl;
	std::cout << "\t\t\t\t      #########     #########     ##################" << std::endl;
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "\t\t\t\t       Arriba         Abajo           Confirmar\n";
	std::cout << "\033[38;5;202m";//naranja
	std::cout << "\t\t\t\t    O--o--o--o--o--o--o--o--0--o--o--o--o--o--o--o--O\n" << std::endl;
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "\t\t\t\t                        Creadores:" << std::endl;

	std::cout << "\t\t\t\t               Reyner Rojas & Makin Artavia" << std::endl;
	std::cout << "\033[38;5;128m";//morado
	std::cout << "Presione 1 para salir de las configuraciones: ";
	std::cin >> salir;
	if (salir == 1) {
		system("CLS");
		music.stop();
		music.play(L"Enter.wav");
		delay(400);
	}
	else {
		system("CLS");
		std::cout << "Valor digitado invalido. Digite de nuevo" << std::endl;
		controlsInfo();
	}
}

void Views::transition()
{
	int ms = 15;
	for (int i = 0; i < 2; i++)
	{
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toooo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOooo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t0ooo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOooo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toooo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toOoo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\to0oo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toOoo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toooo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tooOo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\too0o" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tooOo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toooo" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toooO" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tooo0" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toooO" << std::endl;
		delay(ms);
		system("cls");
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\toooo" << std::endl;
		delay(ms);
		system("cls");
	}
}

bool Views::autoPlay()
{
	int opt;
	system("cls");
	music.play(L"Notification.wav");
	delay(140);
	std::cout << "\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\033[38;5;051m";//turqueza
	std::cout << "\t\t\t\t\t\t   0--o--o--O--o--o--0\n\n";
	std::cout << "\t\t\t\t\t\t\033[38;5;226m    Ver la repeticion\n\n\t\t\t\t\t\t\033[38;5;128m          1. Sip\n\n\t\t\t\t\t\t          2. Nop\n\n";
	std::cout << "\033[38;5;051m";//turqueza
	std::cout << "\t\t\t\t\t\t 0--o--o--: V :--o--o--0\n";
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "\t\t\t\t\t\t            ";
	std::cin >> opt;
	if (opt == 1) {
		system("cls");
		return true;
	}
	else if (opt == 2) {
		system("cls");
		return false;
	}
	else {
		std::cout << "Opcion incorrecta." << std::endl;
		system("pause");
		system("cls");
		autoPlay();
	}
}

void Views::dead()
{
	int ms = 200;
	system("cls");
	std::cout << "\n\n\n\n\n\n\n";
	std::cout << "\033[38;5;128m";//morado
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "\t\t\t\t\t\t    ##        ##    \n";
	std::cout << "\033[38;5;128m";//morado
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\n";
	std::cout << "\t\t\t\t\t\t  ################  \n";
	std::cout << "\t\t\t\t\t\t ## WWWWWWWWWWWW ## \n";
	std::cout << "\t\t\t\t\t\t##                ##\n";
	std::cout << "\t\t\t\t\t\t##";
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "       @        ";
	std::cout << "\033[38;5;128m";//morado
	std::cout << "##\n";
	std::cout << "\t\t\t\t\t\t##                ##\n";
	std::cout << "\t\t\t\t\t\t ## MMMMMMMMMMMM ## \n";
	std::cout << "\t\t\t\t\t\t  ################  \n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\n";
	std::cout << "\t\t\t\t\t\t ################## \n";
	std::cout << "\t\t\t\t\t\t##  WWWWWWWWWWWW  ##\n";
	std::cout << "\t\t\t\t\t\t##";
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "       @        ";
	std::cout << "\033[38;5;128m";//morado
	std::cout << "##\n";
	std::cout << "\t\t\t\t\t\t##  MMMMMMMMMMMM  ##\n";
	std::cout << "\t\t\t\t\t\t ################## \n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\n";
	std::cout << "\t\t\t\t\t\t ################## \n";
	std::cout << "\t\t\t\t\t\t##  WWWWWWWWWWWW  ##\n";
	std::cout << "\t\t\t\t\t\t##  MMMMMMMMMMMM  ##\n";
	std::cout << "\t\t\t\t\t\t ################## \n";
	music.play(L"ReStart.wav");
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\n";
	std::cout << "\t\t\t\t\t\t ################## \n";
	std::cout << "\t\t\t\t\t\t ##++++++++++++++##\n";
	std::cout << "\t\t\t\t\t\t ################## \n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\033[38;5;128m";//morado
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\033[38;5;226m";//amarillo
	std::cout << "\t\t\t\t\t\t    ##        ##    \n";
	std::cout << "\033[38;5;128m";//morado
	std::cout << "\t\t\t\t\t\t  ######    ######  \n";
	std::cout << "\n";
	std::cout << "\t\t\t\t\t\t ################## \n";
	std::cout << "\t\t\t\t\t\t  ################ \n";
	delay(ms);
	system("cls");
}

void Views::exit()
{
	int ms = 50;
	system("cls");
	std::cout << "\n\n\n\n\n\n";
	std::cout << "\033[38;5;128m";//morado
	std::cout << "\t\t\t\t\t      ##############################\n";
	std::cout << "\t\t\t\t\t     ####                        ####\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ###                            ###\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ###                            ###\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ###                            ###\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ###                            ###\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ####                          ####\n";
	std::cout << "\t\t\t\t\t    ###                            ###\n";
	std::cout << "\t\t\t\t\t    ##################################\n";
	delay(ms + 100);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n";
	std::cout << "\033[38;5;128m";//morado
	std::cout << "\t\t\t\t\t      #############################\n";
	std::cout << "\t\t\t\t\t     ###                         ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    ###                           ###\n";
	std::cout << "\t\t\t\t\t    #################################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t       ##########################\n";
	std::cout << "\t\t\t\t\t      ###                      ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ###                        ###\n";
	std::cout << "\t\t\t\t\t     ##############################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t        #######################\n";
	std::cout << "\t\t\t\t\t       ##                     ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ##                       ##\n";
	std::cout << "\t\t\t\t\t      ###########################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t         ####################\n";
	std::cout << "\t\t\t\t\t        ##                  ##\n";
	std::cout << "\t\t\t\t\t       ##                    ##\n";
	std::cout << "\t\t\t\t\t       ##                    ##\n";
	std::cout << "\t\t\t\t\t       ##                    ##\n";
	std::cout << "\t\t\t\t\t       ##                    ##\n";
	std::cout << "\t\t\t\t\t       ##                    ##\n";
	std::cout << "\t\t\t\t\t       ##                    ##\n";
	std::cout << "\t\t\t\t\t       ##                    ##\n";
	std::cout << "\t\t\t\t\t       ##                    ##\n";
	std::cout << "\t\t\t\t\t       ########################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t          #################\n";
	std::cout << "\t\t\t\t\t         ##               ##\n";
	std::cout << "\t\t\t\t\t        ##                 ##\n";
	std::cout << "\t\t\t\t\t        ##                 ##\n";
	std::cout << "\t\t\t\t\t        ##                 ##\n";
	std::cout << "\t\t\t\t\t        ##                 ##\n";
	std::cout << "\t\t\t\t\t        ##                 ##\n";
	std::cout << "\t\t\t\t\t        ##                 ##\n";
	std::cout << "\t\t\t\t\t        ##                 ##\n";
	std::cout << "\t\t\t\t\t        #####################\n";
	delay(ms);
	music.play(L"rejas.wav");
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t           ###############\n";
	std::cout << "\t\t\t\t\t          ##             ##\n";
	std::cout << "\t\t\t\t\t         ##               ##\n";
	std::cout << "\t\t\t\t\t         ##               ##\n";
	std::cout << "\t\t\t\t\t         ##               ##\n";
	std::cout << "\t\t\t\t\t         ##               ##\n";
	std::cout << "\t\t\t\t\t         ##               ##\n";
	std::cout << "\t\t\t\t\t         ##               ##\n";
	std::cout << "\t\t\t\t\t         ###################\n";
	delay(ms);
	system("cls");

	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226mV V V V V V\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226mV V V V V V V\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226mV V V V V V V\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226mV V V V V V V\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226mV V V V V V V\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226mV V V V V V V\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##             ##\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms);
	music.play(L"Impact.wav");
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226mV V V V V V V\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t \033[38;5;051m.\033[38;5;128m##\033[38;5;226m| | |\033[38;5;051mo\033[38;5;226m| | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  #\033[38;5;051mo\033[38;5;226mV\033[38;5;051mo\033[38;5;226mV V V\033[38;5;051m.\033[38;5;226mV V\033[38;5;051mo\033[38;5;226mV\033[38;5;128m#\033[38;5;051moo\n";
	std::cout << "\t\t\t\t\t\t  \033[38;5;128m#################\n";
	delay(ms + 100);
	system("cls");


	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t\033[38;5;051m.\033[38;5;128m ##\033[38;5;226m| |\033[38;5;051m.\033[38;5;226m| | |\033[38;5;051m.\033[38;5;226m| |\033[38;5;128m##   \033[38;5;051m.\n";
	std::cout << "\t\t\t\t\t\t o\033[38;5;128m##\033[38;5;226m| | |\033[38;5;051m.\033[38;5;226m| | |\033[38;5;051mo\033[38;5;226m|\033[38;5;128m##\033[38;5;051mo\n";
	std::cout << "\t\t\t\t\t\t  o\033[38;5;128m#\033[38;5;226mV\033[38;5;051moo.\033[38;5;226mV V\033[38;5;051mo\033[38;5;226mV V\033[38;5;051m.\033[38;5;226mV\033[38;5;128m#\033[38;5;051mo\033[38;5;128m\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms + 100);

	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t\033[38;5;051mo\033[38;5;128m ##\033[38;5;226m| |\033[38;5;051mo\033[38;5;226m| | |\033[38;5;051mo\033[38;5;226m|\033[38;5;051m.\033[38;5;226m|\033[38;5;128m##\033[38;5;051m.  o\n";
	std::cout << "\t\t\t\t\t\t .\033[38;5;128m##\033[38;5;226m| | |\033[38;5;051mo\033[38;5;226m| | | |\033[38;5;128m## \n";
	std::cout << "\t\t\t\t\t\t  \033[38;5;051m.\033[38;5;128m#\033[38;5;226mV\033[38;5;051m..o\033[38;5;226mV V\033[38;5;051mo\033[38;5;226mV \033[38;5;051mo\033[38;5;226m V\033[38;5;128m#\033[38;5;051m.\n";
	std::cout << "\t\t\t\t\t\t  \033[38;5;128m#################\n";
	delay(ms + 100);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t\033[38;5;051m. \033[38;5;128m##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t \033[38;5;051m.\033[38;5;128m##\033[38;5;226m| | |\033[38;5;051m.\033[38;5;226m| | |\033[38;5;051m.\033[38;5;226m|\033[38;5;128m## \n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | |\033[38;5;051m.\033[38;5;226m| | |\033[38;5;128m## \n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226mV V\033[38;5;051m.\033[38;5;226mV V V V V\033[38;5;128m#\033[38;5;051m.\n";
	std::cout << "\t\t\t\t\t\t  \033[38;5;128m#################\n";
	delay(ms + 100);
	system("cls");
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\t\t    #############\n";
	std::cout << "\t\t\t\t\t\t   ##\033[38;5;226m | | | | | \033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m## \n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226m| | | | | | |\033[38;5;128m## \n";
	std::cout << "\t\t\t\t\t\t  ##\033[38;5;226mV V V V V V V\033[38;5;128m##\n";
	std::cout << "\t\t\t\t\t\t  #################\n";
	delay(ms);
}
