#pragma once
#include <iostream>
#include<sstream>
#include"Mascota.h"
using namespace std;
class Due�o
{
private:
	string nombre;

	Mascota* mascota;// asociamos una mascota a un duenio(la mascota debera ser creada para poder asignarla a un duenio)
public:
	Due�o(string nombre, Mascota* mascota);
	~Due�o();
	string getNombre();
	Mascota* getMascota();
	string toString();
	
};

