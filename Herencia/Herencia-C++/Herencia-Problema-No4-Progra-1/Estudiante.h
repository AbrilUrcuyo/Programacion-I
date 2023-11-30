#pragma once
#include"Persona.h"
//hereda de persona
class Estudiante : public Persona {
   private:
	   string carrera;
	   int edad;
   public:
	   Estudiante(string, string, string, int);
	   string toString();
	   ~Estudiante();
};