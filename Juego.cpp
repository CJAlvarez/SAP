// Juego.cpp
#include "Juego.h"

Juego::Juego() {	
	cout << "Ingrese Nombre: ";
	getline(cin, nombre);
}

Juego::~Juego() {}

int Juego::run() {
	Archivo* ARCHIVO = new Archivo();
	Guerrero* f = new Vacio(nombre, 100, 99, 88, 77, 66);
	AjustarVentana(150, 58);


	initscr();

  	start_color();
  	/*
    init_pair(0, COLOR_BLACK, COLOR_WHITE);
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);
    init_pair(3, COLOR_BLACK, COLOR_YELLOW);
    init_pair(4, COLOR_BLACK, COLOR_BLUE);
    init_pair(5, COLOR_BLACK, COLOR_MAGENTA);
    init_pair(6, COLOR_BLACK, COLOR_CYAN);
    init_pair(7, COLOR_BLACK, COLOR_WHITE);*/
    init_pair(0, COLOR_WHITE, COLOR_BLACK);
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);
    init_pair(7, COLOR_WHITE, COLOR_BLACK);


	Point csr;
	csr.x = 1;
	csr.y = 10;
	char c;	

	// CREAR VENTANAS
	WINDOW* DATA;
	WINDOW* OPTION;
	WINDOW* SCREEN;
	// Informacion de usuario
	DATA = newwin(20, 25, 0, 0);
	// Pantalla de Juego
	SCREEN = newwin(20, 40, 0, 25);
	// Menu
	OPTION = newwin(10, 65, 20, 0);



	noecho();
	curs_set(0);
	//raw();
	//keypad(stdscr, TRUE);
	halfdelay(0);	
	do {
		//PintarVentana(DATA, 1);
		//PintarVentana(SCREEN, 2);
		PintarVentana(OPTION, 3);
		f -> Estado(DATA);

		
		mvwprintw(SCREEN, csr.y, csr.x, "##");
		wrefresh(SCREEN);
		c = getch();
		//wclear(SCREEN);
		
		if(c == 'A') {
			csr.y--;
		}
		if( c == 'B') {
			csr.y++;
		}
		if(c == 'D') {
			csr.x--;
		}
		if(c == 'C') {			
			csr.x++;
		}		
		if(c == 'a') {
			
		}
		if(c == 'd') {
			
		}
		if(c == 'q') {
			break;
		}		
		//refresh();		
		wrefresh(OPTION);
		wrefresh(DATA);		
	} while (c != 'q');
	endwin();
	return 0;
}

bool Juego::AjustarVentana(int x, int y) {
	
}

void Juego::PintarVentana(WINDOW* w, int color) {
	init_pair(0, COLOR_BLACK, COLOR_WHITE);
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);
    init_pair(3, COLOR_BLACK, COLOR_YELLOW);
    init_pair(4, COLOR_BLACK, COLOR_BLUE);
    init_pair(5, COLOR_BLACK, COLOR_MAGENTA);
    init_pair(6, COLOR_BLACK, COLOR_CYAN);
    init_pair(7, COLOR_BLACK, COLOR_WHITE);
	int y, x;
	getmaxyx(w, y, x);
	attron(A_REVERSE);
    attron(COLOR_PAIR(color));
	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			mvwprintw(w, i, j, "||");
		}
	}
	attroff(A_REVERSE);
    attroff(COLOR_PAIR(color));
    wrefresh(w);
}

// IDEA PARA INSERTAR NOMBRE
/* 
char c;
stringstream ss;
// USAR METODO PARA SITUAR CURSOR <Buscarlo> IDK
echo();
while((c = getch()) == <ENTER>) {
	ss << c;
} // acumula los caracterees ingresados
cout << ss.str();
*/