// Cartera.cpp
#include "Cartera.h"

Cartera::Cartera() {
	almacenamiento = 5;
	srand(time(NULL));
}

Cartera::~Cartera() {
}

void Cartera::Habilidad() {
	if((rand()% 5) == 2) {
		for (int i = 0; i < objetos -> size(); ++i) {
			if(typeid(objetos -> at(i)) != typeid(Rollo*)) {
				static_cast<Pocion*>(objetos -> at(i)) -> Mejora(2);
			}
		}
	}
}

void Cartera::Desgastar() {	
	if((rand() % 100) == 2) {
		estado -= 1;
	}
	usleep(25555);
}

void Cartera::Reparar(int salud) {

}

int Cartera::Nueva() {
	return 0;
}