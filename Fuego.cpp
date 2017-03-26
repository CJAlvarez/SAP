// Fuego.cpp
#include "Fuego.h"

Fuego::Fuego() : Mago() {} // Default, para lectura

Fuego::Fuego(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Mago (nombre, poder, defensa, salud, nivel, puntuacion) {} // Para usuario

Fuego::Fuego(string nombre) : Mago(nombre) {} // Para Pc

Fuego::~Fuego() {
	this -> Mago::~Mago();
}

//void Fuego::Defender(Guerrero* g) {} // DEFINIR ESTE METODO, O SI NO, BORRARLO
void Fuego::Atacar(Guerrero* g) {
	if(typeid(g) == typeid(Aire*)) {
		g -> RecibirGolpe(poder + (poder * 0.25));
	} else {
		g -> RecibirGolpe(poder);
	}
}

string Fuego::Data() {
	return Mago::Data().append("Fuego").append(Atributos());
}