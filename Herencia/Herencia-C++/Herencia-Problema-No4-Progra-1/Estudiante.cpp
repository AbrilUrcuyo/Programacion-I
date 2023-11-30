#include"Estudiante.h"

Estudiante::Estudiante(string ced, string nom, string carr, int ed){
	cedula = ced;
	nombre = nom;
	carrera = carr;
	edad = ed;
	
}

string Estudiante::toString() {
	stringstream s;
	s << "------------ESTUDIANTE--------------" << endl;
	s << "Cedula: " << cedula << endl;
	s << "Nombre: " << nombre << endl;
	s << "Carrera: " << carrera << endl;
	s << "Edad: " << edad << " anios." << endl;
	s << endl;
	return s.str();
}

Estudiante::~Estudiante() {}