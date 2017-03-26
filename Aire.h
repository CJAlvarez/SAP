// Aire.h
#ifndef AIRE_H
#define AIRE_H

#include "Mago.h"
#include "Tierra.h"

class Aire : public Mago {
public:
		Aire(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		Aire(string, int, int, int, int, int); // Para usuario
		// @param nombre
		Aire(string); // Para Pc
		~Aire();

		//virtual void Defender(Guerrero*); // DEFINIR ESTE METODO, O SI NO, BORRARLO
		virtual void Atacar(Guerrero*);			
		virtual string Data();
};
#endif