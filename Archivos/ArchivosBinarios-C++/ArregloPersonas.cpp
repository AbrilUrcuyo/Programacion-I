#include "ArregloPersonas.h"

ArregloPersonas::ArregloPersonas(int maxPersonas)
{
	personas = new Persona *[maxPersonas];
	tamanio = new int(maxPersonas);
	cantidad = new int(0);
}

void ArregloPersonas::agregar(Persona *persona)
{
	personas[*cantidad] = persona;
	(*cantidad)++;
}

void ArregloPersonas::guardarArreglo()
{
	fstream strm("personas.dat", ios::out | ios::binary);
	for (int i = 0; i < *cantidad; i++)
	{
		Persona::serializar(strm, personas[i]);
	}
	strm.close();
}

ArregloPersonas *ArregloPersonas::cargarArreglo()
{
	fstream strm("personas.dat", ios::in | ios::binary);
	ArregloPersonas *arregloPersonas = new ArregloPersonas();
	while (!strm.eof())
	{
		Persona *persona = Persona::deserializar(strm);
		if (persona == nullptr || strm.eof())
		{
			break;
		}
		arregloPersonas->agregar(persona);
	}
	strm.close();
	return arregloPersonas;
}

string ArregloPersonas::toString()
{
	stringstream ss;
	for (int i = 0; i < *cantidad; i++)
	{
		ss << personas[i]->toString() << endl;
	}
	return ss.str();
}

ArregloPersonas::~ArregloPersonas()
{
	for (int i = 0; i < *cantidad; i++)
	{
		delete personas[i];
	}
	delete[] personas;
	delete tamanio;
	delete cantidad;
}
