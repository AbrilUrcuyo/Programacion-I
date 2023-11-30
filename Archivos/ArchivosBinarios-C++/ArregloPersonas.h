#pragma once
#include "Persona.h"

#define MAX_PERSONAS_DEFAULT 50

class ArregloPersonas
{
private:
    Persona **personas;
    int *tamanio;
    int *cantidad;

public:
    ArregloPersonas(int = MAX_PERSONAS_DEFAULT);
    void agregar(Persona *);
    void guardarArreglo();
    static ArregloPersonas *cargarArreglo();
    string toString();
    ~ArregloPersonas();
};
