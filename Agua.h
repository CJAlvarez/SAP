// Agua.h
#ifndef AGUA_H
#define AGUA_H

#include "Mago.h"
#include "Fuego.h"

class Agua : public Mago {
public:
		Agua(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		Agua(string, int, int, int, int, int); // Para usuario
		// @param nombre
		Agua(string); // Para Pc
		~Agua();

		virtual void Atacar(Guerrero*);			
		virtual string Data();
};
#endif