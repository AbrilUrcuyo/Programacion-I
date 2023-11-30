#include "AgenciaVentas.h"
#include "Colores.h"
int main() {
	AgenciaVentas* agencia = new AgenciaVentas(2, 2);
	Carro* car1 = new Carro("Toyota", 2015);
	Carro* car2 = new Carro("Mazda", 2018);
	Carro* car3 = new Carro("Nissan", 2019);
	Carro* car4 = new Carro("Chevrolet", 2017);
	Agente* agente4 = new Agente("Jeniffer", "99999", 45, car4);
	Agente* agente1 = new Agente("Juan","111111", 25, car1);
	Agente* agente2 = new Agente("Maria","22222", 30, car2);
	Agente* agente3 = new Agente("Pedro","33333", 35, car3);
	agencia->agregarVendedor(agente1);
	agencia->agregarVendedor(agente2);
	agencia->agregarVendedor(agente3);
	agencia->agregarVendedor(agente4);
	cout << "******************* AGENCIA DE VENTAS *******************" << endl;
	
	cout << agencia->mostrar() << endl;
	cout << "******************* ASIGNAR UN NUEVO CARRO A UN AGENTE POR POSICION *******************" << endl;
	agencia->asignarUnNuevoCarro(0, 1, new Carro("Mitsubishi", 2019));
	cout << "******************* MOSTRANDO AGENTES ACTUALIZADOS *******************" << endl;
	cout << agencia->mostrar() << endl;
	cout << "******************* DESPEDIR UN VENDEDOR POR CEDULA *******************" << endl;
	agencia->eliminarVendedor("22222");


	cout << "******************* MOSTRANDO AGENTES ACTUALIZADOS *******************" << endl;
	cout << agencia->mostrar() << endl;
	system("pause");
	
	return 0;
}