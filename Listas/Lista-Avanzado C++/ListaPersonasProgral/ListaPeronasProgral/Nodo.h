#pragma once
#include"Persona.h"
class Nodo
{
private:
    Persona* per;//elemento que almacena
    Nodo* sig;//puntero al siguiente
public:
    Nodo(Persona*, Nodo*);
    Nodo();
    virtual ~Nodo();
    void setsig(Nodo*);
    void setPer(Persona*);
    Persona* getPer();
    Nodo* getsig();
};

