#include"Vector_Dueños.h"
int main() {
	//primero creamos la mascota
	Mascota* m = new Mascota("colita", "chiguagua", "perro");
	//asociamos la mascota al duenio
	Dueño* d = new Dueño("Juan", m);
	Vector_Dueños* duenios = new Vector_Dueños(4);
	system("cls");
	duenios->agregarDuenio(d);
	cout << duenios->toString() << endl;

	delete duenios;
	
}
