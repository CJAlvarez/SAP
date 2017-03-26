// Guerrero.h
#ifndef GUERRERO_H
#define GUERRERO_H

#include "Personaje.h"

class Guerrero : public Personaje {	
	protected:
		int poder;
		int defensa;
		
		// Debilidad
		int debilidad;
		string debilidades[5] = {"Fuego", "Tierra", "Agua", "Aire", "Vacio"};

		int vivo;
		int salud;
		int nivel;

		// Puntuacion
		int puntuacion;
		int PUNTUACION_MAXIMA; // Se define en base al nivel

		// Arma
		vector <int>* arma;
		int ARMA_ACTUAL;
		string s_armas[6] = {"Puño", "Fuego", "Tierra", "Agua", "Aire", "Vacio"};

	public:
		Guerrero(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		Guerrero(string, int, int, int, int, int); // Para usuario
		// @param nombre
		Guerrero(string); // Para Pc
		~Guerrero();

		//virtual void Defender(Guerrero*); // DEFINIR ESTE METODO, O SI NO, BORRARLO
		virtual void Atacar(Guerrero*);
		virtual void CambiarArma();
		virtual void Estado(WINDOW*);
		virtual string Data();
		virtual void subirPuntuacion(int);

		void SubirNivel();
		void Morir();
		string UsarCosa(Cosa*);

		int Poder();
		int Defensa();
		int Debilidad();
		int Vivo();
		int Salud();
		int Nivel();
		int Puntuacion();
		int Arma();
};

#endif