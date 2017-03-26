// Personaje.h
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "Cartera.h"

#include <ncurses.h>
#include <sstream>

using namespace std;

class Personaje {
	protected:
		int vivo;
		int color;
		string nombre;
		string figura;
		Mochila* mochila;

	public:
		Personaje();
		// @param nombre
		Personaje(string);
		~Personaje();

		virtual string Data();

		int Vivo();
		int Color();
		string Nombre();
		string Figura();
		Mochila* MiMochila();
};
#endif