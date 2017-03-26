// P_Poder.h
#ifndef P_PODER_H
#define P_PODER_H

#include "Pocion.h"

class P_Poder : Pocion {
	public:
		P_Poder();
		// potencia
		P_Poder(int);
		~P_Poder();

		virtual void Fermentar();
};
#endif