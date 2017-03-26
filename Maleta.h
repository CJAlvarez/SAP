// Maleta.h
#ifndef MALETA_H
#define MALETA_H

#include "Mochila.h"

class Maleta : public Mochila {
	// estado
	// almacenamiento
	// objetos
public:
	Maleta();	
	~Maleta();

	virtual void Habilidad();
	virtual void Desgastar(); // HILO
	// salud
	virtual void Reparar(int);
	virtual int Nueva();
};
#endif