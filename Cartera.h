// Cartera.h
#ifndef CARTERA_H
#define CARTERA_H

#include "Mochila.h"

class Cartera : public Mochila {
	// almacenamiento
	// objetos
public:
	Cartera();	
	~Cartera();

	virtual void Habilidad();
	virtual void Desgastar(); // HILO
	// salud
	virtual void Reparar(int);
	virtual int Nueva();
};
#endif