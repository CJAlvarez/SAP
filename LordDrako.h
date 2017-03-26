// LordDrako.h
#ifndef LORDDRAKO_H
#define LORDDRAKO_H

#include "Guerrero.h"
#include "Vacio.h"

class LordDrako : public Guerrero {
public:
		LordDrako(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		LordDrako(string, int, int, int, int, int); // Para usuario
		// @param nombre
		LordDrako(string); // Para Pc
		~LordDrako();

		//virtual void Defender(Guerrero*); // DEFINIR ESTE METODO, O SI NO, BORRARLO
		virtual void Atacar(Guerrero*);
		virtual string Data();
};
#endif