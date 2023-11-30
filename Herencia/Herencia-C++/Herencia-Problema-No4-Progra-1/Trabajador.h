#pragma once
#include"Persona.h"
//hereda de persona
class Trabajador : public Persona {
   protected:
	   int* vecEdadesHijos;
	   int numHijos;
   public:
	   Trabajador(string, string, int);
	   void llenarVecDeEdades();
	   virtual string toString() = 0;//virtusl puro
	   ~Trabajador();
};
