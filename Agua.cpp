// Agua.cpp
#include "Agua.h"

Agua::Agua() : Mago() {
	debilidad = 1;
	arma -> push_back(3);
} // Default, para lectura

Agua::Agua(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Mago (nombre, poder, defensa, salud, nivel, puntuacion) {
	debilidad = 1;
	arma -> push_back(3);
} // Para usuario

Agua::Agua(string nombre) : Mago(nombre) {
	debilidad = 1;
	arma -> push_back(3);
} // Para Pc

Agua::~Agua() {
	this -> Mago::~Mago();
}

void Agua::Atacar(Guerrero* g) {
	if(typeid(g) == typeid(Fuego*)) {
		g -> RecibirGolpe(poder + (poder * 0.25));
	} else {
		g -> RecibirGolpe(poder);
	}
}

string Agua::Data() {
	return Mago::Data().append("Agua").append(Atributos());
}