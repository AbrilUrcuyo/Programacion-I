#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Tienda
{
private:
	string nombre;
	string provincia;
	string telefono;
	string codigo;
	double ventaMensual;
public:
	Tienda();
	Tienda(string, string, string, string,double);
	~Tienda();
	void setNombre(string);
	void setProvincia(string);
	void setTelefono(string);
	void setCodigo(string);
	string getNombre();
	string getProvincia();
	string getTelefono();
	string getCodigo();
	double getVentaMensual();
	string mostrar();
};

