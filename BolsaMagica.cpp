// BolsaMagica.cpp
#include "BolsaMagica.h"

BolsaMagica::BolsaMagica() {
	almacenamiento = 10000;
	srand(time(NULL));
}

BolsaMagica::~BolsaMagica() {
}

void BolsaMagica::Habilidad() {
	if((rand()% 10) == 2) {
		for (int i = 0; i < objetos -> size(); ++i) {
			if(typeid(objetos -> at(i)) != typeid(Rollo*)) {
				static_cast<Pocion*>(objetos -> at(i)) -> Mejora(2);
			}
		}
	}
}

void BolsaMagica::Desgastar() {	
	if((rand() % 1000) == 2) {
		estado -= 1;
	}
	usleep(25555);
}

void BolsaMagica::Reparar(int salud) {	
	if((estado * 0.10) <= 100) {
		estado += (estado * 0.10);
	}
}

int BolsaMagica::Nueva() {
	if((rand() % 200) == 2) {
		estado = 100;
		return 1;
	}
	return 0;
}