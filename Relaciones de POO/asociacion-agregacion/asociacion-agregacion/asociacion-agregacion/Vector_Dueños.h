#pragma once
#include "Due�o.h"
class Vector_Due�os
{
private:
	Due�o* *duenios;// duenio 
	int tam;// capacidad maxima
	int cant;// cantidad elementos validos
public:
	Vector_Due�os(int);
	~Vector_Due�os();
	bool agregarDuenio(Due�o*);// agregacion- viene un objeto del exterior previamente  creado
	void eliminarDuenio(string);

	int getCant();
	string toString();
	
	
};

