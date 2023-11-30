#pragma once
#include <string>
#include <sstream>
using namespace std;
class Carro
{
private:
	string marca;
	int anio;
public:
	Carro();
	Carro(string, int);
	void setMarca(string);
	void setAnio(int);
	string getMarca();
	int getAnio();
	string toString();
};

