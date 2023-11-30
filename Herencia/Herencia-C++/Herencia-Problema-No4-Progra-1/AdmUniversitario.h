#pragma once
#include"Trabajador.h"
//hereda dd trbajador
class AdmUniversitario : public Trabajador {
  private:
    string titulo;
    int aniosLaborales;
  public:
    AdmUniversitario(string, string, int, string, int);
    string toString();
    virtual ~AdmUniversitario();
};
