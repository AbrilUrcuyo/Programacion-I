#include"ProfUniversitario.h"

ProfUniversitario::ProfUniversitario(string ced, string nom, int nH, bool prop, string GA)
	:Trabajador(ced, nom, nH){
	propiedad = prop;
	gradoAcademico = GA;
	Trabajador::llenarVecDeEdades();
}

string ProfUniversitario::toString() {
	stringstream s;
	s << "-------------PROFESOR UNIVERSITARIO-----------------" << endl;
	s << "Cedula: " << cedula << endl;
	s << "Nombre: " << nombre << endl;
	s << "Propiedad: " << propiedad << endl;
	s << "Grado academico: " << gradoAcademico << endl;
	s << "Numero de hijos..." << numHijos << endl;
	if (numHijos > 0) {
		s << "Edades de sus hijos" << endl;
		for (int i = 0; i < numHijos; i++) {
			s << "H" << i + 1 << ": \t" << vecEdadesHijos[i] << endl;
		}
	}
	s << endl;
	return s.str();
}

ProfUniversitario::~ProfUniversitario() {}

