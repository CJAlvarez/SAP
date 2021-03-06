// Tierra.cpp
#include "Tierra.h"

Tierra::Tierra() : Mago() {
	color = 3;
	figura = "##";
	debilidad = 3;
	arma -> push_back(2);
} // Default, para lectura

Tierra::Tierra(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Mago (nombre, poder, defensa, salud, nivel, puntuacion) {
	color = 3;
	figura = "##";
	debilidad = 3;
	arma -> push_back(2);
} // Para usuario

Tierra::Tierra(string nombre) : Mago(nombre) {
	color = 3;
	figura = "##";
	debilidad = 3;
	arma -> push_back(2);
} // Para Pc

Tierra::~Tierra() {
	this -> Mago::~Mago();
}

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