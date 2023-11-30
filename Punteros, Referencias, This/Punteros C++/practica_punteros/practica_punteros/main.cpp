#include"Mascota.h"

int main() {
	//creacion de objetos dinamicos
	//reservacion de memoria
	Mascota* perro = new Mascota("Perro",2,3.5);
	Mascota* gato = new Mascota("Gato", 1, 2.5);
	cout <<"Mostrando la mascota perro" << endl;
	cout << perro->toString() << endl;
	cout << "Mostrando la mascota gato" << endl;
	cout <<gato->toString() << endl;
	//liberacion de memoria
	delete perro;
	delete gato;
	//error intento acceso a memoria invalida
	cout << perro->toString() << endl;
	return 0;
}