// Aire.cpp
#include "Aire.h"

Aire::Aire() : Mago() {
	color = 7;
	figura = "||";
	debilidad = 0;
	arma -> push_back(4);
} // Default, para lectura

Aire::Aire(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Mago (nombre, poder, defensa, salud, nivel, puntuacion) {
	color = 7;
	figura = "||";
	debilidad = 0;
	arma -> push_back(4);
} // Para usuario

Aire::Aire(string nombre) : Mago(nombre) {
	color = 7;
	figura = "||";
	debilidad = 0;
	arma -> push_back(4);
} // Para Pc

Aire::~Aire() {
	this -> Mago::~Mago();
}

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