#pragma once
#include "Nodo.h"
#include <iostream>
class Lista
{
private:
	Nodo* primero;//ppio,auxiliar
public:
	Lista();
	Lista(const Lista&);
	virtual~Lista();
	Nodo* getPrimero();
	bool esVacio();//es para saber si la lista esta vacia
	bool ingresaPersona(Persona*);// bool o con void
	string toString();//mostrar
	Persona* busca(string);//buscar persona
	bool eliminarPersona(string);// eliminar persona
	bool cambiarPersona(string, Persona*);// recibe la cedula de la persona que esta en la lista y quieren 
	bool comparaListasIguales(Lista*);
	bool ingresarPorOrdenDeNombre(Persona*);
	string imprimirTodosLasPersonasConNombre(string);
	void guardarPersonas();/*ignorar*/
	void leerPersona();/*ignorar*/
	

};

