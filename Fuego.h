// Fuego.h
#ifndef FUEGO_H
#define FUEGO_H

#include "Mago.h"
#include "Aire.h"

class Fuego : public Mago {
public:
		Fuego(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		Fuego(string, int, int, int, int, int); // Para usuario
		// @param nombre
		Fuego(string); // Para Pc
		~Fuego();

		//virtual void Defender(Guerrero*); // DEFINIR ESTE METODO, O SI NO, BORRARLO
		virtual void Atacar(Guerrero*);			
		virtual string Data();
};
#endif