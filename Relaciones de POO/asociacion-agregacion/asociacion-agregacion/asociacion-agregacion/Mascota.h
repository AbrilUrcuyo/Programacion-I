#pragma once
#include <iostream>
#include<sstream>
using namespace std;
// clase independiente
class Mascota
{
private:
	string nombre;
	string raza;
	string tipo;
public:
	Mascota(string nombre, string raza, string tipo);
	~Mascota();
	string getNombre();
	string getRaza();
	string getTipo();
	string toString();
};

