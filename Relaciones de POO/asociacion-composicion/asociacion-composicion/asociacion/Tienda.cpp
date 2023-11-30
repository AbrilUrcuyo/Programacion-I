#include "Tienda.h"

Tienda::Tienda()
{
	this->codigo = "";
	this->nombre = "";
	this->provincia= "";
	this->telefono = "";
	this->ventaMensual = 0.0;
	
}

Tienda::Tienda(string codigo, string nombre, string direccion, string telefono, double ventaMensual)
{
	this->codigo = codigo;
	this->nombre = nombre;
	this->provincia = direccion;
	this->telefono = telefono;
	this->ventaMensual = ventaMensual;

}

Tienda::~Tienda()
{
}

void Tienda::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Tienda::setProvincia(string provincia)
{
	this->provincia = provincia;
}

void Tienda::setTelefono(string telefono)
{
	this->telefono = telefono;
}

void Tienda::setCodigo(string codigo)
{
	this->codigo = codigo;
}

string Tienda::getNombre()
{
	return this->nombre;
}

string Tienda::getProvincia()
{
	return this->provincia;
}

string Tienda::getTelefono()
{
	return this->telefono;
}

string Tienda::getCodigo()
{
	return this->codigo;
}

double Tienda::getVentaMensual()
{
	return this->ventaMensual;
}

string Tienda::mostrar()
{
	stringstream s;
	s << "Codigo: " << this->codigo << endl;
	s << "Nombre: " << this->nombre << endl;
	s << "Provincia: " << this->provincia << endl;
	s << "Telefono: " << this->telefono << endl;
	return s.str();
}
