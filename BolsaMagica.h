// BolsaMagica.h
#ifndef BOLSAMAGICA_H
#define BOLSAMAGICA_H

#include "Mochila.h"

class BolsaMagica : public Mochila {
	// estado
	// almacenamiento
	// objetos
public:
	BolsaMagica();	
	~BolsaMagica();

	virtual void Habilidad();
	virtual void Desgastar(); // HILO
	// salud
	virtual void Reparar(int);
	virtual int Nueva();
};
#endif