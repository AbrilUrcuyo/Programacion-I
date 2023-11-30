#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include"Tienda.h"
using namespace std;
class ContenedorTienda
{
private:
	Tienda* *tiendas;
	int cant;
	int tama;
public:

	ContenedorTienda(int);
	~ContenedorTienda();
	void agregarTienda(Tienda*);
	bool eliminarTienda(string);
	Tienda* buscarTiendaCodigo(string);
	string mostrarTiendasProvincia(string);
	string mostrar();
	double promedioVentas();
	bool existe(string codigo);
};

