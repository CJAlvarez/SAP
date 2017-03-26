// Juego.h
#ifndef JUEGO_H
#define JUEGO_H

#include "Agua.h"
#include "Aire.h"

class Juego {
public:
	Juego();
	//Juego(string); // SI ENVIA UN NOMBRE
	~Juego();

	int run();
};

#endif