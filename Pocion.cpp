// Pocion.cpp
#include "Pocion.h"

Pocion::Pocion() {
	potencia = 0;
	descripcion = "Pocion";
}

Pocion::Pocion(int potencia) {
	this -> potencia = potencia;
	descripcion = "Pocion";	
}

int Pocion::Potencia() {
	return potencia;
}

void Pocion::Mejora(int aumento) {
	potencia += aumento;
}

void Pocion::Fermentar() {}