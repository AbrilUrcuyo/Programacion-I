#include "Carro.h"
#include"Colores.h"
Carro::Carro() {
	marca = "";

	anio = 0;
}
Carro::Carro(string marca,  int anio) {

	this->marca = marca;
	this->anio = anio;
}
void Carro::setMarca(string marca) {
	this->marca = marca;


}
void Carro::setAnio(int anio) {
	this->anio = anio;

}
string Carro::getMarca() {
	return this->marca;
}

int Carro::getAnio() {
	return this->anio;
}
string Carro::toString() {
	stringstream s;
	s <<CYAN "Marca: " << marca << endl;
	s <<CYAN "Anio: " << anio << endl;
	return s.str();

}