// Tierra.cpp
#include "Tierra.h"

Tierra::Tierra() : Mago() {} // Default, para lectura

Tierra::Tierra(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Mago (nombre, poder, defensa, salud, nivel, puntuacion) {} // Para usuario

Tierra::Tierra(string nombre) : Mago(nombre) {} // Para Pc

Tierra::~Tierra() {
	this -> Mago::~Mago();
}

//void Tierra::Defender(Guerrero* g) {} // DEFINIR ESTE METODO, O SI NO, BORRARLO
void Tierra::Atacar(Guerrero* g) {
	if(typeid(g) == typeid(Agua*)) {
		g -> RecibirGolpe(poder + (poder * 0.25));
	} else {
		g -> RecibirGolpe(poder);
	}
}

string Tierra::Data() {
	return Mago::Data().append("Tierra").append(Atributos());
}