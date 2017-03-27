// Borracho.h
#ifndef BORRACHO_H
#define BORRACHO_H

#include "Aldeano.h"

class Borracho : public Aldeano {
	protected:
		string conversacion;		

	public:
		Borracho();
		// @param nombre conversacion
		Borracho(string);
		~Borracho();
};
#endif