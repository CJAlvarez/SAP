// Mago.cpp
#include "Mago.h"

Mago::Mago() : Guerrero() {} // Default, para lectura

Mago::Mago(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Guerrero (nombre, poder, defensa, salud, nivel, puntuacion) {} // Para usuario

Mago::Mago(string nombre) : Guerrero(nombre) {} // Para Pc

Mago::~Mago() {
	this -> Guerrero::~Guerrero();
}

//void Mago::Defender(Guerrero* g) {} // DEFINIR ESTE METODO, O SI NO, BORRARLO
string Mago::Data() {
	return "Mago::";
}