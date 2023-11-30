#pragma once
#include"Trabajador.h"
// hereda de trabajador
class ProfUniversitario : public Trabajador {
    private:
        bool propiedad;
        string gradoAcademico;
    public:
        ProfUniversitario(string, string, int, bool, string);
        string toString();
        virtual ~ProfUniversitario();
};