// P_Nivel.h
#ifndef P_NIVEL_H
#define P_NIVEL_H

#include "Pocion.h"

class P_Nivel : public Pocion {
public:
	P_Nivel();
	// potencia
	P_Nivel(int);
	~P_Nivel();
	
	virtual void Fermentar();
};
#endif