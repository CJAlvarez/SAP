// Vacio.h
#ifndef VACIO_H
#define VACIO_H

#include "Mago.h"

class Vacio : public Mago {
public:
		Vacio(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		Vacio(string, int, int, int, int, int); // Para usuario
		// @param nombre
		Vacio(string); // Para Pc
		~Vacio();

		virtual void Atacar(Guerrero*);			
		virtual string Data();
};
#endif