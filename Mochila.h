// Mochila.h
#ifndef MOCHILA_H
#define MOCHILA_H

#include "P_Salud.h"
#include "P_Poder.h"
#include "P_Nivel.h"
#include "Rollo.h"

#include <vector>
#include <typeinfo>

class Mochila {
	protected:
		int estado;
		int almacenamiento;		
		vector <Cosa*>* objetos;

	public:
		Mochila();		

		~Mochila();
	
		virtual void Habilidad() = 0;
		virtual void Desgastar() = 0; // HILO
		// Salud
		virtual void Reparar(int) = 0;
		virtual int Nueva() = 0;

		vector <Cosa*>* Objetos();
		int Almacenamiento();
		int Estado();

		string GuardarObjeto(Cosa*);
};

#endif