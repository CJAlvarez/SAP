// Aldeano.cpp
#include "Aldeano.h"

Aldeano::Aldeano() : Personaje() {
	color = 2;
	figura = "qp";	
}

Aldeano::Aldeano(string nombre, string conversacion) : Personaje(nombre) {
	color = 2;
	figura = "qp";
	this -> conversacion = conversacion;
}

Aldeano::~Aldeano() {
	this -> Personaje::~Personaje();
}

string Aldeano::Data() {
	return Personaje::Atributos().append(conversacion);
}

Cosa* Aldeano::DarObjeto() {
	return mochila -> Objetos() -> at(0);
}