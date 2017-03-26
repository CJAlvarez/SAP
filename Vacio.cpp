// Vacio.cpp
#include "Vacio.h"

Vacio::Vacio() : Mago() {} // Default, para lectura

Vacio::Vacio(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Mago (nombre, poder, defensa, salud, nivel, puntuacion) {} // Para usuario

Vacio::Vacio(string nombre) : Mago(nombre) {} // Para Pc

Vacio::~Vacio() {
	this -> Mago::~Mago();
}

//void Vacio::Defender(Guerrero* g) {} // DEFINIR ESTE METODO, O SI NO, BORRARLO
void Vacio::Atacar(Guerrero* g) {
	if(typeid(g) == typeid(Vacio*)) {
		g -> RecibirGolpe(poder + (poder * 0.25));
	} else {
		g -> RecibirGolpe(poder);
	}
}

string Vacio::Data() {
	return Mago::Data().append("Vacio").append(Atributos());
}