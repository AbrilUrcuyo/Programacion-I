#include "Dueño.h"

Dueño::Dueño(string nombre, Mascota* mascota)
{
	this->nombre = nombre;
	this->mascota = mascota;
}

Dueño::~Dueño()
{
	if (this->mascota == nullptr) {
		delete mascota;
	}
}

string Dueño::getNombre()
{
	return this->nombre;
}

Mascota* Dueño::getMascota()
{
	return this->mascota;
}

string Dueño::toString()
{
	stringstream s;
	s << "Nombre del duenio: " << nombre << endl;
	s << "Mascota asociada: "<<endl;
	s << this->mascota->toString() << endl;
	return s.str();
}

