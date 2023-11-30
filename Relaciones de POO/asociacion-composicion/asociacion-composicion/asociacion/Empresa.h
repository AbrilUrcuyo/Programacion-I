#pragma once
#include"ContenedorTienda.h"
class Empresa
{
private:
	string nombre;
	ContenedorTienda* contenedorTienda;
public:
	Empresa();
	Empresa(string);
	Empresa(string, ContenedorTienda* contenedorTienda);
	~Empresa();
	void agregarTienda();
	void eliminarTienda();
	string buscarTiendaCodigo();
	string mostrarTiendasProvincia();
	string mostrar();
	void promedioVentas();
};

/*
reto ahora haga una clase "dueño" que tenga un nombre y un contenedor de empresas
*/