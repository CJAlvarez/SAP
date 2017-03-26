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
	this -> Personaje::~Personaje();
	delete[] arma;
}

string Guerrero::Atributos() {
	stringstream ss;
	ss << this -> Personaje::Atributos() << "\nPODER: " << poder << "\nDEFENSA: " << defensa;
	ss << "\nDEBILIDAD: " << debilidades[debilidad] << "\nSALUD: " << salud << "\nNIVEL: " << nivel;
	ss << "\nPUNTUACION: " << puntuacion << "/" << PUNTUACION_MAXIMA << "\nARMA ACTUAL: " << s_armas[ARMA_ACTUAL];
	ss << "\nARMAS: ";
	for (int i = 0; i < arma -> size(); ++i) {
		ss << i << ".- " << s_armas[ARMA_ACTUAL];
	}
	return ss.str();
}

void Guerrero::CambiarArma() {
	if(ARMA_ACTUAL == (arma -> size()-1)) {
		ARMA_ACTUAL = 0;
	} else {
		ARMA_ACTUAL++;
	}
}
void Guerrero::Estado(WINDOW* w) {
	// mvwprintw(w, y, x, Data()); //  y, x SON LA POSICION DE LOS ESTADOS DE LOS GUERREROS (TIPO MINECRAFT)
}

string Guerrero::Data() {
	return "";
}
void Guerrero::subirPuntuacion(int aumento) {
	if((puntuacion + aumento) >= PUNTUACION_MAXIMA) {
		nivel++;
		puntuacion = (puntuacion + aumento) - PUNTUACION_MAXIMA ;
		PUNTUACION_MAXIMA = (nivel * 1000) + nivel;
	} else {
		puntuacion += aumento;
	}
}

void Guerrero::SubirNivel() {
	nivel++;
}

void Guerrero::Morir() {
	salud = 0;
	vivo = 0;
}

string Guerrero::UsarCosa(Cosa* c) {
	if(typeid(c) == typeid(Rollo*)) {
		return c -> Descripcion();		 
	}
}

void Guerrero::RecibirGolpe(int golpe) {
	if(defensa >= golpe) {
		salud -= golpe - (defensa * 0.50);
	} else {
		salud -= (golpe * (defensa/100));
	}
}

int Guerrero::Poder() {
	return poder;
}

int Guerrero::Defensa() {
	return defensa;
}

int Guerrero::Debilidad() {
	return debilidad;
}

int Guerrero::Salud() {
	return salud;
}

int Guerrero::Nivel() {
	return nivel;
}

int Guerrero::Puntuacion() {
	return puntuacion;
}

int Guerrero::Arma() {
	return ARMA_ACTUAL;
}