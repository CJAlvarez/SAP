// Juego.h
#ifndef JUEGO_H
#define JUEGO_H

#include "Archivo.h"
#include "Vacio.h"
#include "Agua.h"
#include "Aire.h"
#include "Curandero.h"
#include "Herrero.h"
#include "Borracho.h"
#include "Normal.h"

#include <vector>

struct Point {
	int x;
	int y;
};

class Juego {
protected:
	string nombre;
	vector<char**>* mapas;
	vector <Personaje*>* personas;
	Archivo* file;

public:
	Juego();
	~Juego();

	int run();
	
	void PintarVentana(WINDOW*, int);
};

#endif