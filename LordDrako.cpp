// LordDrako.cpp
#include "LordDrako.h"

LordDrako::LordDrako() : Guerrero() {
	color = 5;
	figura = "VV";
	debilidad = 4;
	arma -> push_back(5);
} // Default, para lectura

LordDrako::LordDrako(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Guerrero (nombre, poder, defensa, salud, nivel, puntuacion) {
	color = 5;
	figura = "VV";
	debilidad = 4;
	arma -> push_back(5);
} // Para usuario

LordDrako::LordDrako(string nombre) : Guerrero(nombre) {
	color = 5;
	figura = "VV";
	debilidad = 4;
	arma -> push_back(5);
} // Para Pc

LordDrako::~LordDrako() {
	this -> Guerrero::~Guerrero();
}

void LordDrako::Atacar(Guerrero* g) {
	if(typeid(g) == typeid(Vacio*)) {
		g -> RecibirGolpe(poder + (poder * 0.50));
	} else {
		g -> RecibirGolpe(poder);
	}
}

string LordDrako::Data() {
	return Guerrero::Data().append("Lord. Drako").append(Atributos());
}