#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include <Windows.h>

using namespace std;
//super clase
class Persona {
   protected:
	  string cedula;
	  string nombre;

   public:
	  Persona();
	  Persona(string, string);
	  virtual string toString() = 0;// metodo virtual puro, se tiene que declarar y definir en cada uno de sus hijos
	  ~Persona();
};