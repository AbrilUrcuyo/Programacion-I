#include "AgenciaVentas.h"
#include "Colores.h"

AgenciaVentas::AgenciaVentas(int filas, int columnas) {
	
		this->filas = filas;
		this->columnas = columnas;
		vendedores = new Agente * *[filas];// crear primer columna
		for (int i = 0; i < filas; i++) {
			vendedores[i] = new Agente * [columnas];// crear vectores (columnas) de la primer fila
		}

		// inicializar la matriz para objetos dinamicos, inicializa en nullptr todos los campos
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++)
				vendedores[i][j] = nullptr;
		}
	}

AgenciaVentas::~AgenciaVentas()
{
	// recorremos todos los campos de la mtriz para liberar la memoria reservada
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			delete vendedores[i][j];// liberamos la memoria de los objetos
		}
		delete[] vendedores[i];// liberamos la memoria de columnas
	}
	delete[] vendedores;//  eliminamos la principal
}

void AgenciaVentas::setFilas(int f) {
	this->filas = f;
}
void AgenciaVentas::setColumnas(int c) {
	this->columnas = c;
}
int AgenciaVentas::getFilas() {
	return this->filas;
}
int AgenciaVentas::getColumnas() {
	return this->columnas;
}
string AgenciaVentas::mostrar() {
	stringstream s;
	s << BLUE " *******************AGENTES*********************" << endl;
	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			//verificar que no imprima espacios nulos
			if (vendedores[i][j] != nullptr) {
				s << vendedores[i][j]->mostrar() << " ";
			}
		}
		s << endl;
	}
	return s.str();
	
	
}
bool AgenciaVentas::agregarVendedor(Agente* vendedor) {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			//verificar si el espacio es disponible
			if (vendedores[i][j] == nullptr) {
				vendedores[i][j] = vendedor;
				return true;
			}
		}
	}
	return false;// la matriz no tiene espacioo

}
Agente* AgenciaVentas::getVendedor(int fila, int columna) {
	return vendedores[fila][columna];//retorne el vendedor en las posiciones solicitadas
	// si retorna nullptr, significa que no existe un vendedor en esa posicion
	
}
//despedir un vendedor
bool AgenciaVentas::eliminarVendedor(string cedula){
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (vendedores[i][j] != nullptr) {// si el campo no es nulo 
				if (vendedores[i][j]->getCedula() == cedula) {// si el nombre del vendedor es igual al nombre del vendedor que se desea despedir
					delete vendedores[i][j];//elimine el vendedor
					vendedores[i][j] = nullptr;//asigne el campo como nulo
					return true;
				}
			}
		}
	}
	return false;
}
// asignar un nuevo carro a un vendedor
void AgenciaVentas::asignarUnNuevoCarro(int fil, int col, Carro* car)
{
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (i == fil && j ==col) {// si encontromla posicion
				if (vendedores[i][j] != nullptr) {// si el nombre del vendedor es igual al nombre del vendedor que se desea despedir
					vendedores[fil][col]->setCarro(car);// asigna el carro al vendedor en las posiciones solicitadas
				}
			}
		}
	}


	
}
