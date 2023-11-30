#include "ContenedorTienda.h"

ContenedorTienda::ContenedorTienda(int tama)
{
	this->tama = tama;
	this->cant = 0;
	this->tiendas = new Tienda * [tama];
	for (int i = 0; i < tama; i++)
	{
		this->tiendas[i] = nullptr;
	}
}

ContenedorTienda::~ContenedorTienda()
{
	for (int i = 0; i < cant; i++)
	{
		if (this->tiendas[i] != nullptr)
		delete this->tiendas[i];
	}
	delete[] this->tiendas;
}

void ContenedorTienda::agregarTienda(Tienda* tienda)
{
	if (this->cant < this->tama)
	{
		this->tiendas[this->cant] = tienda;
		this->cant++;
	}
}

bool ContenedorTienda::eliminarTienda(string codigo)
{
	for (int i = 0; i < cant; i++)
	{
		if (this->tiendas[i]->getCodigo() == codigo)
		{
			delete this->tiendas[i];// liberar memoria
			this->tiendas[i] = nullptr;//asignar null
			for (int j = i; j < cant - 1; j++)
			{
				this->tiendas[j] = this->tiendas[j + 1];//correr a la izquierda
			}
			this->cant--;
			return true;
		}
	}
	return false;
	
}

Tienda* ContenedorTienda::buscarTiendaCodigo(string codigo)
{
	for (int i = 0; i < cant; i++)
	{
		if (this->tiendas[i]->getCodigo() == codigo)
		{
			return this->tiendas[i];
		}
	}
	return nullptr;
}

string ContenedorTienda::mostrarTiendasProvincia(string provincia)
{
	stringstream s;
	for (int i = 0; i < cant; i++)
	{
		if (this->tiendas[i]->getProvincia() == provincia)
		{
			s << this->tiendas[i]->mostrar() << endl;
		}
	}
	return s.str();
}

string ContenedorTienda::mostrar()
{
	stringstream s;
	for (int i = 0; i < cant; i++)
	{
		s << this->tiendas[i]->mostrar() << endl;
	}
	return s.str();
}

double ContenedorTienda::promedioVentas()
{
	double suma = 0.0;
	for (int i = 0; i < cant; i++)
	{
		suma += this->tiendas[i]->getVentaMensual();
	}
	return suma;
}

bool ContenedorTienda::existe(string codigo)
{
	for (int i = 0; i < cant; i++)
	{
		if (this->tiendas[i]->getCodigo() == codigo)
		{
			return true;
		}
	}
	return false;
}
