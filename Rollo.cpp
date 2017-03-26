// Rollo.cpp
#include "Rollo.h"

Rollo::Rollo() : Cosa() {
	descripcion = "Rollo: ";
}

Rollo::Rollo(string descripcion) {
	this -> descripcion += descripcion;
}