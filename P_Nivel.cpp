// P_Nivel.cpp
#include "P_Nivel.h"

P_Nivel::P_Nivel() : Pocion() {
	descripcion.append(" Nivel");
	// CREAR HILO QUE CORRA FERMENTAR
}

P_Nivel::P_Nivel(int potencia) : Pocion(potencia) {
	descripcion.append(" Nivel");
}

P_Nivel::~P_Nivel() {
	// TERMINAR HILO
}

void P_Nivel::Fermentar() {
	srand(time(NULL));
	if(potencia % 2 == 0) {
		potencia += (rand() % 2);
	}
	usleep(255555);
}