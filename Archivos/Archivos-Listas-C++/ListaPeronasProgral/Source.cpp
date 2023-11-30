#include<iostream>
#include<string>
#include"Lista.h"
using namespace std;
int main() {
	Lista * lisPersonas = new Lista();
	Persona* per = new Persona("Juan", "12345", 23);
	Persona* pe = new Persona("Jose", "12345", 23);
	Persona* per1 = new Persona("Ana", "18905", 43);
	Persona* per2 = new Persona("Leo", "60567", 93);
	Persona* per3 = new Persona("Josefa", "10203", 13);
	Persona* per4 = new Persona("Ana", "60567", 93);
	lisPersonas->ingresaPersona(per);
	lisPersonas->ingresaPersona(per1);
	lisPersonas->ingresaPersona(per2);
	lisPersonas->guardarPersonas();
	cout << lisPersonas->toString() << endl;
	Lista* l_copia = new Lista(*lisPersonas);
	cout << "--------------lista original-------------------" << endl;
	cout << lisPersonas->toString() << endl;
	cout << "--------------lista copia-------------------" << endl;
	cout << l_copia->toString() << endl;
	cout << "Lista" << endl;
	cout<<typeid(per).name()<<endl;// el typeid indica el tipo de objeto
	cout << lisPersonas->toString() << endl;
	
	//lisPersonas->leerPersona();
	//cout << lisPersonas->toString() << endl;
	//Lista* lisPersonas1 = new Lista();
	//lisPersonas->ingresaPersona(per);
	//lisPersonas->ingresaPersona(per1);
	//lisPersonas->ingresaPersona(per2);
	//lisPersonas->ingresaPersona(per3);
	//cout << "Mostrando la lista que fue ingresadas " << endl;
	//cout << lisPersonas->toString() << endl;
	//// guardar la lista en un archivo
	//lisPersonas->guardarPersonas();
	// leer la lista del archivo
	
	// mostrar la lista que se leyo del archivo
	delete lisPersonas;
	//delete l_copia;
	//cout << "Imprimir por nombre todas las Ana" << endl;
	//cout << lisPersonas->imprimirTodosLasPersonasConNombre("Ana") << endl;
	/*lisPersonas->ingresaPersona(per1);
	lisPersonas->ingresaPersona(per2);
	lisPersonas->ingresaPersona(per3);*/
	
	/*lisPersonas1->ingresaPersona(per1);
	lisPersonas1->ingresaPersona(per2);
	lisPersonas1->ingresaPersona(per4);*/
	//if (lisPersonas->comparaListasIguales(lisPersonas1)) {
	//	cout << "Las listas son iguales" << endl;
	//}
	//else {
	//	cout << "Las listas son diferentes" << endl;
	//}
	/*cout << "********LISTA DE PERSONAS********" << endl;
	cout << lisPersonas->toString() << endl;
	cout << "Buscando persona con cedula 10203" << endl;
	cout <<lisPersonas->busca("10203")->toString() << endl;
	cout << "Cambiando a Juan por Luisa" << endl;
	Persona* per5 = new Persona("luisa", "3333", 16);
    lisPersonas->cambiarPersona("12345",per5) ;
	cout << "********IMPRIMIENDO NUEVA LISTA DE PERSONAS********" << endl;
	cout << lisPersonas->toString() << endl;
	cout << "Eliminando a Josefa" << endl;
	lisPersonas->eliminarPersona("10203");
	cout << "********IMPRIMIENDO NUEVA LISTA DE PERSONAS********" << endl;
	cout << lisPersonas->toString() << endl;*/
	return 0;
}