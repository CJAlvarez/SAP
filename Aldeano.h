// Aldeano.h
#ifndef ALDEANO_H
#define ALDEANO_H

#include "Personaje.h"

class Aldeano : public Personaje {
	protected:
		string conversacion;		

	public:
		Aldeano();
		// @param nombre conversacion
		Aldeano(string, string);
		~Aldeano();

		virtual string Data();

		Cosa* DarObjeto();
};
#endif