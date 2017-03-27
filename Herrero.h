// Herrero.h
#ifndef HERRERO_H
#define HERRERO_H

#include "Aldeano.h"

class Herrero : public Aldeano {
	protected:
		string conversacion;		

	public:
		Herrero();
		// @param nombre conversacion
		Herrero(string);
		~Herrero();
};
#endif