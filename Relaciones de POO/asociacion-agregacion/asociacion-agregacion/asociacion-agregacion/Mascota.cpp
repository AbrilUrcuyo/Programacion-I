#include "Mascota.h"

Mascota::Mascota(string nombre, string raza, string tipo)
{
	this->nombre = nombre;
	this->raza = raza;
	this->tipo = tipo;
}

Mascota::~Mascota()
{
}

string Mascota::getNombre()
{
	return this->nombre	;

}

string Mascota::getRaza()
{
	return this->raza;
}

string Mascota::getTipo()
{
	return this->tipo;
}

string Mascota::toString()
{
	stringstream s;
	s << "Tipo: " << tipo << endl;
	s << "Raza: " << raza << endl;
	s << "Nombre: " << nombre<<endl;
	return s.str();
}
