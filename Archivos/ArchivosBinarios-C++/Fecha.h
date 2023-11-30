#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

class Fecha
{
private:
    int *dia;
    int *mes;
    int *anio;

public:
    Fecha(int = 0, int = 0, int = 0);
    int getDia();
    void setDia(int);
    int getMes();
    void setMes(int);
    int getAnio();
    void setAnio(int);
    static void serializar(fstream &, Fecha *);
    static Fecha *deserializar(fstream &);
    string toString();
    ~Fecha();
};
