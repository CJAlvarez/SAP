// P_Salud.cpp
#include "P_Salud.h"

P_Salud::P_Salud() : Pocion() {
	descripcion.append(" Salud");
	// CREAR HILO QUE CORRA FERMENTAR
}

P_Salud::P_Salud(int potencia) : Pocion(potencia) {
	descripcion.append(" Salud");
}

P_Salud::~P_Salud() {
	// TERMINAR HILO
}

void P_Salud::Fermentar() {
	srand(time(NULL));
	if(potencia % 2 == 0) {
		potencia += (rand() % 2 + 1);
	} else if(potencia % 3 == 0) {
		potencia -= (rand() % 2 + 1);
	} else {
		potencia += (rand() % 2) + ((rand() % 3) % 2);
	}
	usleep(2555);
}