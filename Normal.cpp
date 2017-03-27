// Normal.cpp
#include "Normal.h"

Normal::Normal() : Aldeano() {
	mochila = new Cartera();
	mochila -> GuardarObjeto(new P_Salud(rand() % 50));
}

Normal::Normal(string nombre) : Aldeano(nombre, "Esta Pocion Es Tuya") {}

Normal::~Normal() {
	this -> Aldeano::~Aldeano();
}
