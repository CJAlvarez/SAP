// Borracho.cpp
#include "Borracho.h"

Borracho::Borracho() : Aldeano() {
	mochila = new Cartera();
	mochila -> GuardarObjeto(new P_Salud(-1 * (rand() % 25)));
}

Borracho::Borracho(string nombre) : Aldeano(nombre, "Esta Pocion No Es Una Pocion") {}

Borracho::~Borracho() {
	this -> Aldeano::~Aldeano();
}
