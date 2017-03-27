// Fuego.cpp
#include "Fuego.h"

Fuego::Fuego() : Mago() {
	color = 1;
	figura = "&&";
	debilidad = 2;
	arma -> push_back(1);
} // Default, para lectura

Fuego::Fuego(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Mago (nombre, poder, defensa, salud, nivel, puntuacion) {
	color = 1;
	figura = "&&";
	debilidad = 2;
	arma -> push_back(1);
} // Para usuario

Fuego::Fuego(string nombre) : Mago(nombre) {
	color = 1;
	figura = "&&";
	debilidad = 2;
	arma -> push_back(1);
} // Para Pc

Fuego::~Fuego() {
	this -> Mago::~Mago();
}

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