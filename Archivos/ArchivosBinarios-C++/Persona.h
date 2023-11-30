#pragma once
#include "Fecha.h"

#define LONGITUD_MAXIMA_STRING 50

class Persona
{
private:
    int *id;
    string *nombreCompleto;
    Fecha *fechaNacimiento;

public:
    Persona(int = 0, string = "", Fecha * = nullptr);
    int getId();
    void setId(int);
    string getNombreCompleto();
    void setNombreCompleto(string);
    Fecha *getFechaNacimiento();
    void setFechaNacimiento(Fecha *);
    static void serializar(fstream &, Persona *);
    static Persona *deserializar(fstream &);
    string toString();
    ~Persona();
};
