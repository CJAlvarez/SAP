// Normal.h
#ifndef NORMAL_H
#define NORMAL_H

#include "Aldeano.h"

class Normal : public Aldeano {
	protected:
		string conversacion;		

	public:
		Normal();
		// @param nombre conversacion
		Normal(string);
		~Normal();
};
#endif