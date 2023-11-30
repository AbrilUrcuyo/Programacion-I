#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Persona
{
private:
	string nombre;
	string cedula;
	int edad;
public:
	Persona(string, string, int);
	Persona(const Persona&);
	virtual ~Persona();
	string toString();
	string getCedula();
	string getNombre();
	bool esIgualA(Persona&);
	int getEdad();
	void guardar(ostream&);
	// para leer el objeto se usa un metodo estatico ya que nos permite leer el objeto sin tener que crearlo primero 
	static Persona* leer(istream&);//recuperar
};

