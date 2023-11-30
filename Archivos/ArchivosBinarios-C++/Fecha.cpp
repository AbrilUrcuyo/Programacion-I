#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anio)
{
	this->dia = new int(dia);
	this->mes = new int(mes);
	this->anio = new int(anio);
}

int Fecha::getDia()
{
	return *dia;
}

void Fecha::setDia(int dia)
{
	delete this->dia;
	this->dia = new int(dia);
}

int Fecha::getMes()
{
	return *mes;
}

void Fecha::setMes(int mes)
{
	delete this->mes;
	this->mes = new int(mes);
}

int Fecha::getAnio()
{
	return *anio;
}

void Fecha::setAnio(int anio)
{
	delete this->anio;
	this->anio = new int(anio);
}

void Fecha::serializar(fstream& strm, Fecha* fecha)
{
	/*
	en archivos binarios serializar es escribir en el archivo binario los datos de un objeto de una clase en particular en forma de bytes(0 y 1)
	*/
	int dia = fecha->getDia();
	strm.write(reinterpret_cast<char*>(&dia), sizeof(int));/*reinterpret_cast es un casteo de punteros, en este caso de un puntero a int a un puntero a char,
	sizeof(int) es la cantidad de bytes que ocupa un int en memoria, en este caso 4 bytes, entonces se escriben 4 bytes en el archivo binario, que representan el dia
	*/

	int mes = fecha->getMes();
	strm.write(reinterpret_cast<char*>(&mes), sizeof(int));

	int anio = fecha->getAnio();
	strm.write(reinterpret_cast<char*>(&anio), sizeof(int));
}

Fecha* Fecha::deserializar(fstream& strm)
{
	/*
	deserializar es leer del archivo binario los datos de un objeto de una clase en particular en forma de bytes(0 y 1) y crear un objeto de esa clase con esos datos
	para lo cual usamos read, que lee del archivo binario la cantidad de bytes que le indiquemos y los guarda en un puntero a char, que luego casteamos a un puntero a int
	*/
	int dia;
	strm.read(reinterpret_cast<char*>(&dia), sizeof(int));

	int mes;
	strm.read(reinterpret_cast<char*>(&mes), sizeof(int));

	int anio;
	strm.read(reinterpret_cast<char*>(&anio), sizeof(int));

	return new Fecha(dia, mes, anio);
}

string Fecha::toString()
{
	stringstream ss;
	ss << *dia << "/" << *mes << "/" << *anio;
	return ss.str();
}

Fecha::~Fecha()
{
	delete dia;
	delete mes;
	delete anio;
}