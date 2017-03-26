// Juego.h
#ifndef JUEGO_H
#define JUEGO_H

#include "Guerrero.h"
#include "P_Salud.h"
#include "P_Poder.h"
#include "P_Nivel.h"
#include "Rollo.h"
#include "Mochila.h"

class Juego {
public:
	Juego();
	//Juego(string); // SI ENVIA UN NOMBRE
	~Juego();

	int run();
};

#endif