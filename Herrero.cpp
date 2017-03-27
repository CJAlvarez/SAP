// Herrero.cpp
#include "Herrero.h"

Herrero::Herrero() : Aldeano() {
	mochila = new Cartera();
	mochila -> GuardarObjeto(new P_Poder(rand() % 50));
}

Herrero::Herrero(string nombre) : Aldeano(nombre, "Esta Pocion Te Hara Mas Fuerte") {}

Herrero::~Herrero() {
	this -> Aldeano::~Aldeano();
}
