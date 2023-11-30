#pragma once
#include"Agente.h"
class AgenciaVentas
{
private:
	int filas;
	int columnas;
	Agente*** vendedores;
public:
	
	AgenciaVentas(int, int);
	~AgenciaVentas();
	void setFilas(int);
	void setColumnas(int);
	int getFilas();
	int getColumnas();
	string mostrar();
	bool agregarVendedor(Agente*);
	Agente* getVendedor(int, int);
	bool eliminarVendedor(string);
	void asignarUnNuevoCarro(int, int, Carro*);
};

