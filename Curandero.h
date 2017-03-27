// Curandero.h
#ifndef CURANDERO_H
#define CURANDERO_H

#include "Aldeano.h"

class Curandero : public Aldeano {
	protected:
		string conversacion;		

	public:
		Curandero();
		// @param nombre conversacion
		Curandero(string);
		~Curandero();
};
#endif