// Tierra.h
#ifndef TIERRA_H
#define TIERRA_H

#include "Mago.h"
#include "Agua.h"

class Tierra : public Mago {
public:
		Tierra(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		Tierra(string, int, int, int, int, int); // Para usuario
		// @param nombre
		Tierra(string); // Para Pc
		~Tierra();

		virtual void Atacar(Guerrero*);			
		virtual string Data();
};
#endif