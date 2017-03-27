// Juego.cpp
#include "Juego.h"

Juego::Juego(){}

Juego::~Juego() {}
struct Point {
	int x;
	int y;
};

int Juego::run() {
	initscr();
	Point csr;	
	csr.x = 1;
	csr.y = 10;
	char c;	

	noecho();
	curs_set(0);
	raw();
	keypad(stdscr, TRUE);
	halfdelay(0);
	do {		
		mvprintw(0, 0, "Y=%d, X=%d", csr.y, csr.x);
		
		if(KEY_UP) {
		
		}
		if(KEY_DOWN) {
		
		}
		if(KEY_LEFT) {
		
		}
		if(KEY_RIGHT) {
		
		}
		if(c == 'a') {
			
		}
		if(c == 'd') {
			
		}
		if(c == 'q') {
			break;
		}				
		refresh();		
		clear();		
	} while (c != 'q');
	getch();
	endwin();
	return 0;
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