#include"Vector_Due�os.h"
int main() {
	//primero creamos la mascota
	Mascota* m = new Mascota("colita", "chiguagua", "perro");
	//asociamos la mascota al duenio
	Due�o* d = new Due�o("Juan", m);
	Vector_Due�os* duenios = new Vector_Due�os(4);
	system("cls");
	duenios->agregarDuenio(d);
	cout << duenios->toString() << endl;

	delete duenios;
	
}
