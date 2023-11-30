#include "Fecha.h"
/*
write(elemento, tamano)

read(elemento, tamano)

reinterpret_cast<char*>(elemento): pasa el elemento a caracter

sizeof(elemento): tamano del elemento en bytes, lo cual indica cuantos bytes se van a escribir o leer

ios::in: lectura

ios::out: escritura

ios::app: escritura al final del archivo, es decir mantiene lo que ya esta escrito y agrega al final

ios::binary: modo binario

ios::ate: posiciona el puntero al final del archivo

ios::trunc: trunca el archivo, es decir borra todo lo que ya esta escrito

 la extension .dat y .bin son para archivos binarios es decir equivalentes

 los string se interpretan como arreglos de caracteres, por lo que se pueden escribir y leer como tal

 los numeros en el archivo binario son ilegibles, por lo que se debe hacer una conversion para poder leerlos

 cuando se escribe un objeto en un archivo binario, se escribe todo el objeto, es decir todos sus atributos

 si esos atributos son punteros ya sea datos primitivos o no, se realiza metodo serializar y serializsa uno por uno los atributos

 si los atributos no son punteros, se escribe el objeto completo

 int= 4 
 char =  1 
*/
int main(int argc, char* argv[])
{
	fstream strm("archivo.dat", ios::in | ios::app | ios::binary);

	bool guardar = false;

	if (guardar) {
		Fecha* fecha1 = new Fecha(1, 1, 2000);
		strm.write(reinterpret_cast<char*>(fecha1), sizeof(Fecha));
		Fecha* fecha2 = new Fecha(2, 2, 2001);
		strm.write(reinterpret_cast<char*>(fecha2), sizeof(Fecha));
		Fecha* fecha3 = new Fecha(3, 3, 2002);
		strm.write(reinterpret_cast<char*>(fecha3), sizeof(Fecha));
	}
	else {
		Fecha* fecha1 = new Fecha();
		strm.read(reinterpret_cast<char*>(fecha1), sizeof(Fecha));
		cout << fecha1->toString() << endl;
		Fecha* fecha2 = new Fecha();
		strm.read(reinterpret_cast<char*>(fecha2), sizeof(Fecha));
		cout << fecha2->toString() << endl;
		Fecha* fecha3 = new Fecha();
		strm.read(reinterpret_cast<char*>(fecha3), sizeof(Fecha));
		cout << fecha3->toString() << endl;
	}

	strm.close();
	return 0;
}