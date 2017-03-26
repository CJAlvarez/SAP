// main.cpp
#include "Juego.h"

int main() {
	Juego juego;
	//juego = new Juego(nombre); // SI COMIENZA EN CONSOLA NORMAL Y RECOJE EL NOMBRE ANTES DE NCURSES
	return juego.run();
}