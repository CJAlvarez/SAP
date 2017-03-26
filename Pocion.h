// Pocion.h
#ifndef POCION_H
#define POCION_H

#include "Cosa.h"

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

class Pocion : public Cosa {
	protected:
		int potencia;		

	public:
		Pocion();
		// potencia
		Pocion(int);
	
		int Potencia();
		void Mejora(int);

		virtual void Fermentar();		
};
#endif