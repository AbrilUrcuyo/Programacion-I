#include "Empresa.h"

Empresa::Empresa()
{
	this->nombre = "";
	this->contenedorTienda = nullptr;
}

Empresa::Empresa(string nombre)
{
	this->nombre = nombre;
	this->contenedorTienda = nullptr;
}

Empresa::Empresa(string nombre,ContenedorTienda* contenedorTienda)
{
	this->nombre = nombre;
	this->contenedorTienda = contenedorTienda;
}

Empresa::~Empresa()
{
	if (this->contenedorTienda != nullptr)
		delete this->contenedorTienda;
}

void Empresa::agregarTienda()
{
	string codigo = "", nombre = "", provincia = "", telefono = "";
	double ventas = 0.0;

	// Solicitar el código hasta que sea único
	while (codigo == "" || this->contenedorTienda->existe(codigo))
	{
		cout << "Ingrese codigo: ";
		cin >> codigo;

		if (this->contenedorTienda->existe(codigo))
		{
			cout << "El codigo ingresado ya existe, ingrese otro.\n";
		}
	}

	cout << "Ingrese nombre: ";
	cin >> nombre;
	cout << "Ingrese provincia: ";
	cin >> provincia;
	cout << "Ingrese telefono: ";
	cin >> telefono;
	cout << "Ingrese ventas promedio de ventas mensual: ";
	cin >> ventas;

	Tienda* tienda = new Tienda(codigo, nombre, provincia, telefono, ventas);
	this->contenedorTienda->agregarTienda(tienda);
}


void Empresa::eliminarTienda()
{
	string codigo = "";
	cout << "Ingrese codigo: ";
	cin >> codigo;
	if (this->contenedorTienda->eliminarTienda(codigo))
		cout << "Tienda eliminada" << endl;
	else
		cout << "No existe tienda con ese codigo" << endl;
}

string Empresa::buscarTiendaCodigo()
{
	string codigo = "";
	cout << "Ingrese codigo: ";
	cin >> codigo;
	Tienda* tienda = this->contenedorTienda->buscarTiendaCodigo(codigo);
	if (tienda != nullptr)
	{
		return tienda->mostrar();
	}
	return "No existe tienda con ese codigo";
}


string Empresa::mostrarTiendasProvincia()
{
	string provincia = "";
	cout << "Ingrese el nombre de la provincia" << endl;
	cin >> provincia;
	return this->contenedorTienda->mostrarTiendasProvincia(provincia);
}

string Empresa::mostrar()
{
	stringstream s;
	s << "Empresa: " << this->nombre << endl;
	s << "*****************Tiendas asociadas*************";
	if (this->contenedorTienda != nullptr)
	s << this->contenedorTienda->mostrar();
	else {
		
			s << "No hay tiendas registradas" << endl;
		
	}
	return s.str();
}

void Empresa::promedioVentas()
{
	cout << "El promedio de ventas total de las tiendas es:" << endl;
	cout << this->contenedorTienda->promedioVentas()<<endl;
}
