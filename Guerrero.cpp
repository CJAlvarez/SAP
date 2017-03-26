// Guerrero.cpp
#include "Guerrero.h"

Guerrero::Guerrero() : Personaje() {
	poder = defensa = debilidad = salud = nivel = puntuacion = PUNTUACION_MAXIMA = ARMA_ACTUAL = 0;
	arma  = new vector<int>();
	arma -> push_back(0);	
}

Guerrero::Guerrero(string nombre, int poder, int defensa, int salud, int nivel, int puntuacion) 
: Personaje(nombre) {
	this -> poder = poder;
	this -> defensa = defensa;
	this -> salud = salud;

	// Puntuacion 
	this -> nivel = nivel;
	this -> puntuacion = puntuacion;
	PUNTUACION_MAXIMA = (nivel * 1000) + nivel;
	
	// Arma
	arma  = new vector<int>();
	arma -> push_back(0);
	debilidad = ARMA_ACTUAL = 0;
}


Guerrero::Guerrero(string nombre) : Personaje(nombre) {
	poder = defensa = debilidad = salud = puntuacion = ARMA_ACTUAL = 0;
	nivel = 1;
	PUNTUACION_MAXIMA = (nivel * 1000) + nivel;
	arma  = new vector<int>();
	arma -> push_back(0);
}


Guerrero::~Guerrero(){
	delete[] arma;
	//delete static_cast<Personaje*>(this);
}


//void Guerrero::Defender(Guerrero* g) {}

void Guerrero::Atacar(Guerrero* g) {}
	

void Guerrero::CambiarArma() {}

void Guerrero::Estado(WINDOW* w) {}

string Guerrero::Data() {
	return "Guerrero ";
}

void Guerrero::subirPuntuacion() {}


void Guerrero::SubirNivel() {
	nivel++;
}

void Guerrero::Morir() {
	salud = 0;
	vivo = 0;
}

void Guerrero::UsarCosa(Cosa* c) {

}

int Guerrero::Poder() {

}

int Guerrero::Defensa() {

}

int Guerrero::Debilidad() {

}

int Guerrero::Salud() {

}

int Guerrero::Nivel() {

}

int Guerrero::Puntuacion() {

}

int Guerrero::Arma() {

}
