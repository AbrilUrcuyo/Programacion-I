#include"ContenedorTienda.h"
#include"Empresa.h"
int main() {
	ContenedorTienda* contenedorTienda = new ContenedorTienda(10);
	Empresa* empresa = new Empresa("Ripley", contenedorTienda);
	int opcion = 0;
	do
	{
		system("cls");
		cout << "MENU" << endl;
		cout << "1. Agregar tienda" << endl;
		cout << "2. Eliminar tienda" << endl;
		cout << "3. Buscar tienda por codigo" << endl;
		cout << "4. Mostrar empresa info" << endl;
		cout << "5. Mostrar promedio ventas" << endl;
		cout << "6. Mostrar tiendas por provincia" << endl;
		cout << "7. Salir" << endl;
		cout << "Ingrese opcion: ";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			system("cls");
			empresa->agregarTienda();
			break;
		case 2:
			system("cls");
			empresa->eliminarTienda();
			system("pause");
			break;
		case 3:
			system("cls");
			cout << empresa->buscarTiendaCodigo() << endl;
			system("pause");
			break;
		case 4:
			system("cls");
			cout << empresa->mostrar() << endl;
			system("pause");

			break;
		case 5:
			system("cls");
			empresa->promedioVentas();
			system("pause");
			break;

		case 6:
			system("cls");
			cout << empresa->mostrarTiendasProvincia() << endl;
			system("pause");
		case 7:
			system("cls");
			cout << "Gracias por usar el programa" << endl;
			system("pause");
			break;
		default:
			cout << "Opcion incorrecta" << endl;
			break;
		}
	} while (opcion != 7);
	delete empresa;

}