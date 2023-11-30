#include"Persona.h"

Persona::Persona() {
	cedula = " ";
	nombre = " ";
}

Persona::Persona(string ced, string nom) {
	cedula = ced;
	nombre = nom;
}

Persona::~Persona() {}