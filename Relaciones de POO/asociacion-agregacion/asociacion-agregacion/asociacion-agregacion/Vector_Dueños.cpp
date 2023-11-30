#include "Vector_Dueños.h"

Vector_Dueños::Vector_Dueños(int tam)
{
	this->tam = tam;
	this->cant = 0;
	duenios = new Dueño * [tam];
	for (int i = 0; i < tam; i++) {
		duenios[i] = nullptr;
	}
	//al crear de una vez llenamos seria composicion
	//ingresarComposicion() ;
}

Vector_Dueños::~Vector_Dueños()
{
	for (int i = 0; i < cant; i++) {
		if (duenios[i] != nullptr) {
			delete duenios[i];
		}
 }
	delete[]duenios;
}
/*
void Vector_Dueños::ingresarComposicion()
{
	// en este metodo crearemos un vector de duenios con composicion
	// es un ejemplo de como creamos una composicion
	string nombreM, nombre, raza, tipo="";
	cout << " ingrese el nombre de la mascota" << endl;
	cin >> nombreM;
	cout << " ingrese la raza " << endl;
	cin >> raza;
	cout << " ingrese el tipo " << endl;
	cin >> tipo;
	Mascota* m = new Mascota(nombreM, raza, tipo);
	cout << " ingrese el nombre del duenio " << endl;
	cin >> nombre;
	Dueño* d = new Dueño(nombre, m);
	duenios[cant++] = d;

}


*/

bool Vector_Dueños::agregarDuenio(Dueño* d)
{
	//agregacion
	if (cant<tam) {
		duenios[cant++] = d;
		return true;
	}
	return false;
}

void Vector_Dueños::eliminarDuenio(string nombre)
{
	for (int i = 0; i < cant; i++) {
		if (duenios[i]->getNombre()== nombre) {
			delete duenios[i];
		}
		cant--;
	}

}

int Vector_Dueños::getCant()
{
	return this->cant;
}

string Vector_Dueños::toString()
{
	stringstream s;
	for (int i = 0; i < cant; i++)
		s << duenios[i]->toString() << endl;
	return s.str();
}


