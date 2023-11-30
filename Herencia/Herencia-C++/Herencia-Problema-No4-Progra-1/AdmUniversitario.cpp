#include"AdmUniversitario.h"

AdmUniversitario::AdmUniversitario(string ced, string nom, int NH, string titul, int AL)
	:Trabajador(ced, nom, NH){
	titulo = titul;
	aniosLaborales = AL;
	Trabajador::llenarVecDeEdades();
}

string AdmUniversitario::toString() {
		stringstream s;
		s << "-------------ADMINISTRADOR UNIVERSITARIO-----------------" << endl;
		s << "Cedula: " << cedula << endl;
		s << "Nombre: " << nombre << endl;
		s << "Titulo: " << titulo << endl;
		s << "Annyos laborales: " << aniosLaborales << endl;
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

AdmUniversitario::~AdmUniversitario() {}