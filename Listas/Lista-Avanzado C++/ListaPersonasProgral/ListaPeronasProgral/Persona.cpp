#include "Persona.h"
#include "Utilidades.h"
Persona::Persona(string nom, string ced, int ed) :nombre(nom), cedula(ced), edad(ed) {
}
Persona::Persona(const Persona& per)
{
	//le damos a esta persona los valores de la referencia de persona por parametro
	this->cedula = per.cedula;
	this->nombre = per.nombre;
	this->edad = per.edad;
}
Persona::~Persona() {
}

string Persona::toString()  {

	stringstream s;

	s << " Nombre : " << nombre << endl;
	s << " Cedula : " << cedula << endl;
	s << " Edad   : " << edad << endl;
	return s.str();
}
string Persona::getCedula() { return cedula; }
string Persona::getNombre() { return nombre; }
bool Persona::esIgualA(Persona& p)
{
	if (this->cedula == p.getCedula() && this->edad == p.getEdad() && this->nombre == p.getNombre())return true;

	
}
int Persona::getEdad() { return edad; }
/*NOTAS ARCHIVOS:
* 1. Para guardar un objeto en un archivo, se debe tener un metodo que guarde el objeto en un archivo
* 2. Para leer un objeto de un archivo, se debe tener un metodo que lea el objeto de un archivo
* 3. El metodo guardar debe recibir un objeto de la clase ostream, en este metodo vamos a guardar el objeto en el archivo, guardando cada uno de sus atributos
* usando el operador <<, el cual recibe un objeto de la clase ostream y un dato a guardar, ademas separar con tabulador cada atributo guardado
* el ultimo atributo no debe llevar tabulador, para que al leer el objeto sepamos donde termina un atributo y empieza otro usamos el salto de linea
* 4. El metodo leer debe recibir un objeto de la clase istream, en este metodo vamos a leer el objeto del archivo, para leer cada uno de sus atributos
* usamos el operador >>, el cual recibe un objeto de la clase istream y un dato a leer, ademas para leer cada atributo usamos el metodo getline, el cual recibe un objeto de la clase istream
* y un string, este metodo lee una linea del archivo y la guarda en el string, usa tabulador como separador
*/
// en este metodo se guarda la persona en el archivo, usamos el metodo guardar de la clase ostream para guardar los datos de la persona
void Persona::guardar(ostream& salida)
{
	salida << nombre << '\t'; // se guarda el nombre de la persona, se usa el tabulador para separar los datos
	salida << cedula << '\t';// se guarda la cedula de la persona, se usa el tabulador para separar los datos
	salida << edad << '\n';// se guarda la edad de la persona, se usa el salto de linea para separar los datos
	// el salto de linea es para que cuando se lea el archivo se separe los datos de cada persona
}
// en este metodo se lee la persona del archivo, usamos el metodo leer de la clase istream para leer los datos de la persona


Persona* Persona::leer(istream& entrada)
{
	//Persona* per = nullptr;
	string _nombre, _cedula, _edad = "";//creamos las varibales necesarias para almacenar los atributos de la persona
	getline(entrada, _nombre, '\t');// leemos el nombre de la persona, se usa el tabulador para separar los datos
	getline(entrada, _cedula, '\t');// leemos la cedula de la persona, se usa el tabulador para separar los datos
	getline(entrada, _edad, '\n');// leemos la edad de la persona, se usa el salto de linea para separar los datos
	int valEdad = convertirInt(_edad);// convertimos el string a int
	// per(_nombre, _cedula, valEdad);
	// return per;
	return new Persona(_nombre, _cedula, valEdad);// retornamos un puntero a la persona creada
}


