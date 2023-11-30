#include "Due�o.h"

Due�o::Due�o(string nombre, Mascota* mascota)
{
	this->nombre = nombre;
	this->mascota = mascota;
}

Due�o::~Due�o()
{
	if (this->mascota == nullptr) {
		delete mascota;
	}
}

string Due�o::getNombre()
{
	return this->nombre;
}

Mascota* Due�o::getMascota()
{
	return this->mascota;
}

string Due�o::toString()
{
	stringstream s;
	s << "Nombre del duenio: " << nombre << endl;
	s << "Mascota asociada: "<<endl;
	s << this->mascota->toString() << endl;
	return s.str();
}

