// P_Salud.h
#ifndef P_SALUD_H
#define P_SALUD_H

#include "Pocion.h"

class P_Salud : public Pocion {
	public:
		P_Salud();
		P_Salud(int);
		~P_Salud();

		virtual void Fermentar();
};

#endif