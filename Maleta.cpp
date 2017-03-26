// Maleta.cpp
#include "Maleta.h"

Maleta::Maleta() {
	almacenamiento = 10;
	srand(time(NULL));
}

Maleta::~Maleta() {
	this -> Mochila::~Mochila();
}

void Maleta::Habilidad() {
	if((rand()% 10) == 2) {
		for (int i = 0; i < objetos -> size(); ++i) {
			if(typeid(objetos -> at(i)) != typeid(Rollo*)) {
				static_cast<Pocion*>(objetos -> at(i)) -> Mejora(2);
			}
		}
	}
}

void Maleta::Desgastar() {	
	if((rand() % 100) == 2) {
		estado -= 1;
	}
	usleep(25555);
}

void Maleta::Reparar(int salud) {
	if(salud > estado) {
		if((estado * 0.50) <= 100) {
			estado += (estado * 0.50);
		}
	}
}

int Maleta::Nueva() {
	if((rand() % 200) == 2) {
		estado = 100;
		return 1;
	}
	return 0;
}