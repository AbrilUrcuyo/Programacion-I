#include "Lista.h"
// incluir librerias de archivos
#include <fstream>

Lista::Lista() {
	primero = nullptr;//NULL
}

Lista::Lista(const Lista& copia) {
	// constructor copia
	Nodo* n = nullptr;
	Nodo* aux = nullptr;
	Nodo* aux2 = nullptr;
	if (copia.primero != nullptr)
	{
		primero = new Nodo(copia.primero->getPer(), nullptr);
		aux = copia.primero->getsig();
		aux2 = primero;
		while (aux != nullptr)
		{
			n = new Nodo(aux->getPer(), nullptr);
			aux2->setsig(n);
			aux2 = n;
			aux = aux->getsig();
		}
	}
	else{primero = nullptr;}
}
	
	


Lista::~Lista()
{
	Nodo* aux = primero;//nodo auxiliar que observa lo que ve el primero
	while (aux != nullptr)
	{
		primero = primero->getsig();//primero pasa a ver el siguiente
		delete aux;//eliminamos el primer elemento
		aux = primero;//aux pasa a ver el nuevo elemento que observa primero
	}
}
Nodo* Lista::getPrimero()
{
	return primero;
}
bool Lista::esVacio()
{
	return (primero == nullptr);// si el primero es nulo la lista esta vacia
}
bool Lista::ingresaPersona(Persona* per)
{

	Nodo* p = primero;//asignamos un Nodo auxiliar a ver lo que ve el primero
	//if(p == nullptr)
	if (esVacio()) {//si esta vacia primero == nullptr
		primero = new Nodo(per, nullptr);//creamos un nuevo Nodo y le metemos el elemento personay el enlaze al siguiente
		return true;
	}
	else {//si la lista no esta vacia recorremos la lista hasta encontrar el ultimo es decir el que este viendo a nullptr 
		//y insertamos creando un nuevo nodo y seteandolo al que sigue del ultimo'''
		while (p->getsig() != nullptr) {
			p = p->getsig();
		}
		p->setsig(new Nodo(per,nullptr));
		return true;
 }
	return false;//no se pudo ingresar
}

string Lista::toString()
{
	stringstream s;
	Nodo* p = primero;//nodo auxiliar'
	while (p != nullptr) {
		s << p->getPer()->toString();
		p = p->getsig();
		s << endl;
	}
	return s.str();
}
Persona* Lista::busca(string ced)
{
	Nodo* p = primero;
	// ! negacion de una condicion
	// if(primero != nullptr)
	if (!esVacio()) {//si  la lista no esta vacia
		while (p != nullptr) {//mientras el nodo sea distinto de nulo
			if (p->getPer()->getCedula() == ced) {//preguntamos si la persona que almacena tiene la cedula igual a la que buscamos
				return p->getPer();//si es igual la retorna

			}
			p = p->getsig();// pasa al siguiente nodo
		}
	}
	return nullptr;//si recorre toda la lista y no la encuentra retorna nulo
}

bool Lista::eliminarPersona(string ced)
{
	Nodo* p = primero;
	Nodo* anterior = nullptr;
	if (!esVacio() && p->getPer()->getCedula() == ced) {
		Nodo* actual = primero;
		if (!esVacio()) {
			primero = actual->getsig();
			delete actual;
			return true;
		}
	}
	else
		if (!esVacio()) {
			// luis != ced, p = rosa , rosa!= , ernesto == ced, 
			while (p != NULL && p->getPer()->getCedula() != ced) {
				anterior = p;
				p = p->getsig();
			}
			anterior->setsig(p->getsig());
			delete p;
			return true;
		}
	return false;
}

bool Lista::cambiarPersona(string ced, Persona* per)
{
	Nodo* p = primero;
	if (!esVacio()) {
		if (primero->getPer()->getCedula() == ced) {
			primero->setPer(per);
			return true;
		}
		while (p != NULL)
		{
			if (p->getPer()->getCedula() == ced) {
				p->setPer(per);
				return true;
			}
			p = p->getsig();
		}
	}
	return false;
}
//todas iguales en el mismo orden 
// OJO ESTUDIAR
bool Lista::comparaListasIguales(Lista* lis)
{
	Nodo* p = primero;
	Nodo* q = lis->getPrimero();
	if (!esVacio() && !lis->esVacio()) {
		while (p != nullptr && q != nullptr) {
			if (p->getPer()->esIgualA(*(q->getPer())) ) {
				p = p->getsig();
				q = q->getsig();
			}
			else {
				return false;
			}
		}
		return true;
	}
}
// OJO ESTUDIAR
// el valor de las letras en la tabla ASCCI estan en c++ por lo que podemos comparar strings, como comparar letras
bool Lista::ingresarPorOrdenDeNombre(Persona* per)
{
	Nodo* p = primero;
	Nodo* anterior = nullptr;
	//si esta vacia, lo ingresa sin tener que comparar
	if (esVacio()) {
		primero = new Nodo(per, nullptr);
		return true;
	}
	else {
		// para los demas casos, pregunta si el elemento existente tiene un nombre mayor al que se quiere ingresar
		while (p != nullptr && p->getPer()->getNombre() < per->getNombre()) {
			// si es asi se mueve al siguiente nodo
			anterior = p;
			p = p->getsig();
		}
		//si llega al final de la lista, o si el nombre del nodo actual es mayor al que se quiere ingresar
		// la ordena segun el orden alfabetico
		if (anterior == nullptr) {
			primero = new Nodo(per, p);
			return true;
		}
		else {
			anterior->setsig(new Nodo(per, p));
			return true;
		}
	}
	return false;
}

string Lista::imprimirTodosLasPersonasConNombre(string nom)
{
	Nodo* p = primero;
	stringstream s;
	if (!esVacio()) {
		while (p != nullptr) {
			if (p->getPer()->getNombre() == nom) {
				s << p->getPer()->toString();
				s << endl;
			}
			p = p->getsig();
		}
	}
		return s.str();
}
/*ARCHIVOS:
 eof : se usa para 
 */
void Lista::guardarPersonas()
{
	ofstream salida;// salida de datos, usamos ofstream para escribir en un archivo
	Nodo* p = primero;// nodo auxiliar

	salida.open("../ContenedorPersonas.txt");// abrimos el archivo, si no existe lo crea
	while (p != NULL)// mientras no sea nulo
	{
		if (salida.good()) {// si el archivo esta bien, es decir, si se abrio correctamente

			p->getPer()->guardar(salida);// llama el metodo guardar de la clase persona
		}

		p = p->getsig();// pasa al siguiente hasta guardar toda la lista

	}

	salida.close();// siempre se debe cerrar el archivo al final del guardar
}
void Lista::leerPersona()
{
	ifstream entrada;// entrada de datos, usamos ifstream para leer un archivo
	Persona* perler = nullptr;// persona auxiliar
	entrada.open("../ContenedorPersonas.txt");// abrimos el archivo, debe existir y se manda el mismo nombre con el que fue guardado

	if (entrada.good()) {// si el archivo esta bien, es decir, si se abrio correctamente
		while (!entrada.eof())// mientras no se haya llegado al final del archivo
		{
			perler = Persona::leer(entrada);// llama el metodo leer de la clase persona y lo guarda en la persona auxiliar
			if (perler->getCedula() != "") {// si la cedula no esta vacia, es decir, si se leyo correctamente(usamos este verificacion para ver que si se haya obtenido una persona del leer)
				ingresaPersona(perler);// ingresa la persona a la lista
			}
		}
	}
	entrada.close();// siempre se debe cerrar el archivo al final del leer
}
	



