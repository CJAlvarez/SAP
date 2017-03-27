// Juego.h
#ifndef JUEGO_H
#define JUEGO_H

#include "Archivo.h"
#include "Agua.h"
#include "Aire.h"
#include "Curandero.h"
#include "Herrero.h"
#include "Borracho.h"
#include "Normal.h"

struct Mapas {
	
	vector<char**>* mapas;
};

class Juego {
public:
	Juego();
	//Juego(string); // SI ENVIA UN NOMBRE
	~Juego();

	int run();
};

#endif