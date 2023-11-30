#include"Trabajador.h"

Trabajador::Trabajador(string ced, string nom, int numHs) {
	this->cedula = ced;
	this->nombre = nom;
	numHijos = numHs;
	vecEdadesHijos = new int[numHijos];
}

Trabajador::~Trabajador(){
	if (vecEdadesHijos != NULL) {
		delete vecEdadesHijos;
	}
}

void Trabajador::llenarVecDeEdades(){
	//composicion
	this->vecEdadesHijos = new int[numHijos];
	if (numHijos == 0) {
		cout << "Usted no tiene hijos.";
		return;
	}
	for (int i = 0; i < numHijos; i++) {
		int edad = 0;
		cout << "Digite la edad de su hijo #: " << i+1 << endl; cin >> edad;
		vecEdadesHijos[i] = edad;
	}
	cout << "Las edades de sus hijos han sido ingresadas al sistema.";
	cout << "Enter para continuar." << endl;
	system("pause");
}