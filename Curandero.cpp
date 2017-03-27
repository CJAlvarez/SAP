// Curandero.cpp
#include "Curandero.h"

Curandero::Curandero() : Aldeano() {
	mochila = new Cartera();
	mochila -> GuardarObjeto(new P_Salud(rand() % 50));
}

Curandero::Curandero(string nombre) : Aldeano(nombre, "Esta Pocion Te Hara Sentir Mejor") {}

Curandero::~Curandero() {
	this -> Aldeano::~Aldeano();
}
