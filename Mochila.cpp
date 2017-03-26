// Mochila.cpp
#include "Mochila.h"

Mochila::Mochila() {
	almacenamiento = 0;
	estado = 100;
}

Mochila::~Mochila() {
	for (int i = 0; i < objetos -> size(); ++i) {
		delete objetos -> at(i);
	}
	delete objetos;
}

vector <Cosa*>* Mochila::Objetos() {
	return objetos;
}

int Mochila::Almacenamiento() {
	return almacenamiento;
}

int Mochila::Estado() {
	return estado;
}

string Mochila:: GuardarObjeto(Cosa* c) {
	if(almacenamiento < objetos -> size()) {
		objetos -> push_back(c);
		return "GUARDADO EXITOSO";		
	}
	return "MOCHILA LLENA";
}