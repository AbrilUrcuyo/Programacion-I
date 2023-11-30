#include "Agente.h"
#include "Colores.h"
Agente::Agente() {
	this->nombre = "";
	this->edad = 0;
	this->cedula = "";
	this->car = new Carro();
}
Agente::Agente(string nombre, string cedula, int edad, Carro* car) {
	this->nombre = nombre;
	this->edad = edad;
	this->car = car;
	this->cedula = cedula;
}
void Agente::setNombre(string nom) {
	this->nombre = nom;
	
}
void Agente::setEdad(int edad) {
	this->edad = edad;
	
}
string Agente::getNombre() {
	return this->nombre;
}
string Agente::getCedula() {
	return this->cedula;
}
int  Agente::getEdad() {
	return this->edad; 
}
string  Agente::mostrar() {
	stringstream s;
	s <<BLUE "Nombre : " << nombre << endl;
	s <<BLUE "Cedula : " << cedula << endl;
	s <<BLUE "Edad   : " << edad << endl;
	s <<BLUE "Vehiculo asignado : " << endl;
	s << car->toString() << endl;
	return s.str();
}
void  Agente::setCarro(Carro* car) {
	this->car = car;
}
Carro* Agente::getCarro() {
	return this->car;
	
}
