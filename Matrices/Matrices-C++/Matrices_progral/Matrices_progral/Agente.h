#pragma once
#include <iostream>
#include <string>
#include"Carro.h"
using namespace std;
class Agente
{
private:
	string nombre;
	int edad;
	string cedula;
	Carro* car;
public:
	Agente();
	Agente(string,string, int,Carro*);
	void setNombre(string);
	void setEdad(int);
	string getNombre();
	string getCedula();
	int getEdad();
	string mostrar();
	void setCarro(Carro*);
	Carro* getCarro();
};

