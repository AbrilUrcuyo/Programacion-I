#pragma once
#include "Dueño.h"
class Vector_Dueños
{
private:
	Dueño* *duenios;// duenio 
	int tam;// capacidad maxima
	int cant;// cantidad elementos validos
public:
	Vector_Dueños(int);
	~Vector_Dueños();
	bool agregarDuenio(Dueño*);// agregacion- viene un objeto del exterior previamente  creado
	void eliminarDuenio(string);

	int getCant();
	string toString();
	
	
};

