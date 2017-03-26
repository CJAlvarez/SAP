// Aire.cpp
#include "Aire.h"

Aire::Aire() : Mago() {} // Default, para lectura

Aire::Aire(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Mago (nombre, poder, defensa, salud, nivel, puntuacion) {} // Para usuario

Aire::Aire(string nombre) : Mago(nombre) {} // Para Pc

Aire::~Aire() {
	this -> Mago::~Mago();
}

//void Aire::Defender(Guerrero* g) {} // DEFINIR ESTE METODO, O SI NO, BORRARLO
void Aire::Atacar(Guerrero* g) {
	if(typeid(g) == typeid(Tierra*)) {
		g -> RecibirGolpe(poder + (poder * 0.25));
	} else {
		g -> RecibirGolpe(poder);
	}
}

string Aire::Data() {
	return Mago::Data().append("Aire").append(Atributos());
}