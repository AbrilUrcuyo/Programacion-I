#include "Mascota.h"

Mascota::Mascota()
{
	this->peso = 0.0f;
	this->tipo = "";
	this->edad = 0;
}
Mascota::Mascota(string tipo, int edad, float peso)
{
	this->tipo = tipo;
	this->peso = peso;
	this->edad = edad;
}

Mascota::~Mascota()
{
}

void Mascota::setTipo(string tipo)
{
	this->tipo = tipo;
}

void Mascota::setEdad(int edad)
{
	this->edad = edad;
}

void Mascota::setPeso(float peso)
{
	this->peso = peso;
}

string Mascota::getTipo()
{
	return this->tipo;
}

int Mascota::getEdad()
{
	return this->edad;
}

float Mascota::getPeso()
{
	return this->peso;
}

string Mascota::toString()
{
	stringstream s;
	s << " Tipo de mascota " << tipo << endl;
	s << " Edad de la mascota " << edad << endl;
	s << " Peso de la mascota " << peso << endl;
	return s.str();
}
