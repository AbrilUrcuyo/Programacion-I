#pragma once
#include <iostream>
#include<sstream>
#include"Mascota.h"
using namespace std;
class Dueño
{
private:
	string nombre;

	Mascota* mascota;// asociamos una mascota a un duenio(la mascota debera ser creada para poder asignarla a un duenio)
public:
	Dueño(string nombre, Mascota* mascota);
	~Dueño();
	string getNombre();
	Mascota* getMascota();
	string toString();
	
};

