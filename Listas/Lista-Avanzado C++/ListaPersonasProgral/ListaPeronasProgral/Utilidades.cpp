#include "Utilidades.h"

#include <sstream>

int convertirInt(string s) // convierte un string a int, recibe un string y devuelve un int
{
	stringstream r(s);// se crea un objeto de la clase stringstream, se le pasa el string s como parametro para que lo convierta a int
	int v;
	r >> v;// se guarda el valor convertido en la variable v
	return v;// se devuelve el int
}
double convertirDouble(string s)// convierte un string a double, recibe un string y devuelve un double
{
	stringstream r(s);// se crea un objeto de la clase stringstream, se le pasa el string s como parametro para que lo convierta a double
	double v;
	r >> v;// se guarda el valor convertido en la variable v
	return v;// se devuelve el double
}
char convertirChar(string s) {
	stringstream r(s);
	char v;
	r >> v;
	return v;
}
	
bool convertirBool(string s) 
	{
	stringstream r(s);// se crea un objeto de la clase stringstream, se le pasa el string s como parametro para que lo convierta a char
	bool v;
	r >> v;// se guarda el valor convertido en la variable v
	return v;// se devuelve el bool
}



