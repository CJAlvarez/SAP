// Personaje.h
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "Cartera.h"
#include "Maleta.h"
#include "BolsaMagica.h"

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
		virtual string Atributos();

	public:
		Personaje();
		// @param nombre
		Personaje(string);
		~Personaje();

		virtual string Data() = 0;

		int Vivo();
		int Color();
		string Nombre();
		string Figura();
		Mochila* MiMochila();
};
#endif