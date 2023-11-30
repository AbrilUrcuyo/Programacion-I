#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anio)
{
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;

}

int Fecha::getDia()
{
	return this->dia;
}

void Fecha::setDia(int dia)
{
	this->dia = dia;
}

int Fecha::getMes()
{
	return this->mes;
}



void Fecha::setMes(int mes)
{
	this->mes = mes;
}

int Fecha::getAnio()
{
	return this->anio;
}

void Fecha::setAnio(int anio)
{
	this->anio = anio;
}

string Fecha::toString()
{
	stringstream ss;
	ss << dia << "/" << mes << "/" << anio;
	return ss.str();
}