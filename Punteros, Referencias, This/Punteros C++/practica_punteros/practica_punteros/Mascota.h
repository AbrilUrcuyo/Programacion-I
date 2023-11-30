#pragma once
#include<iostream>
#include<sstream>
using namespace std;
class Mascota
{
private:
	string tipo;
	int edad;
	float peso;
public:
	// contructor por defecto el nombre de la clase sin parametros
	Mascota();
	// contructor parametrizado, recibe parametros(atributos)
	Mascota(string,int,float);
	virtual ~Mascota();// delete accede al destructor
	// mutadores = set's = modifican 
	void setTipo(string);
	void setEdad(int);
	void setPeso(float);
	// accesores = get's = devuelven un valor
	string getTipo();
	int getEdad();
	float getPeso();
	string toString();
};

