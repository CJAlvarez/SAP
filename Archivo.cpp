// Archivo.cpp
#include "Archivo.h"

Archivo::Archivo() {}

Archivo::~Archivo() {}


void Archivo::CrearLog(string nombre, string data) {
	string path = nombre;
	path.append(".log");
	const char* ruta = path.c_str();

	ofstream file;
	file.open(ruta);
	file << Fecha();
	file << data;
	file.close();
}
// MAPAS CUADRADOS
char** Archivo::LeerMapas() {
	ifstream file;
	int size;
	char** mapa = NULL;
	file >> size;    
	mapa = InicializarMapa(size);	
	for(int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			file >> mapa[i][j];
		}
	}
	file.close();
}

char** Archivo::InicializarMapa(int size){
	char** retval = new char*[size];
	for (int i = 0; i < size ; i++){
		retval[i]= new char[size];		
	}	
	return retval;
}

string Archivo::Fecha() {
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_mday << '-' << (formato.tm_mon + 1) << '-' << (formato.tm_year + 1900);
	return ss.str();
}