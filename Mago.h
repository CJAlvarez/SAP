// Mago.h
#ifndef MAGO_H
#define MAGO_H

#include "Guerrero.h"

class Mago : public Guerrero {
public:
		Mago(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		Mago(string, int, int, int, int, int); // Para usuario
		// @param nombre
		Mago(string); // Para Pc
		~Mago();

		virtual void Atacar(Guerrero*) = 0;
		virtual void Estado(WINDOW*);
		virtual string Data();
};
#endif