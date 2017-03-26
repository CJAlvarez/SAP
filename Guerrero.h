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
		virtual string Atributos();

	public:
		Guerrero(); // Default, para lectura
		// @param nombre, poder, defensa, salud, nivel, puntuacion
		Guerrero(string, int, int, int, int, int); // Para usuario
		// @param nombre
		Guerrero(string); // Para Pc
		~Guerrero();
		
		virtual void Atacar(Guerrero*) = 0;
		virtual void CambiarArma();
		virtual void Estado(WINDOW*);
		virtual string Data() = 0;
		virtual void subirPuntuacion(int);

		void SubirNivel();
		void Morir();
		string UsarCosa(Cosa*);
		void RecibirGolpe(int);

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