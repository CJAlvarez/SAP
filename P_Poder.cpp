// P_Poder.cpp
#include "P_Poder.h"

P_Poder::P_Poder() : Pocion() {
	descripcion.append(" Poder");
	// CREAR HILO QUE CORRA FERMENTAR
}

P_Poder::P_Poder(int potencia) : Pocion(potencia) {
	descripcion.append(" Poder");
}

P_Poder::~P_Poder() {
	// TERMINAR HILO
}

void P_Poder::Fermentar() {
	srand(time(NULL));
	if(potencia % 2 == 0) {
		potencia += (rand() % 2 + 1);
	} else if(potencia % 5 == 0) {
		potencia -= (rand() % 2 + 1);
	} else {
		potencia += (rand() % 2) + ((rand() % 3) % 2);
	}
	usleep(25555);
}