// Personaje.cpp
#include "Personaje.h"

Personaje::Personaje() {
	color = 0;
	vivo = 1;
	nombre = figura = "";
}

Personaje::Personaje(string nombre) {
	color = 0;
	vivo = 1;
	figura = "";
	this -> nombre = nombre;
}

Personaje::~Personaje() {
	delete mochila;
}

string Personaje::Atributos() {
	stringstream ss;
	ss << "NOMBRE: " << nombre << "\nFIGURA: " << figura;
	return ss.str();
}

int Personaje::Vivo() {
	return vivo;
}

int Personaje::Color() {
	return color;
}

string Personaje::Nombre() {
	return nombre;
}

string Personaje::Figura() {
	return figura;
}

Mochila* Personaje::MiMochila() {
	return mochila;
}