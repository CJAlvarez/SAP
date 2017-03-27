// Archivo.h
#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

class Archivo {
	private:
		char** InicializarMapa(int);
	public:
		Archivo();
		~Archivo();
		
		void CrearLog(string, string);
		char** LeerMapas();
		string Fecha();
};
#endif