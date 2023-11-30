#include "ArregloPersonas.h"

int main(int argc, char *argv[])
{
    bool probarGuardar =false;

    if (probarGuardar)
    {
        ArregloPersonas *arregloPersonas = new ArregloPersonas(10);
        arregloPersonas->agregar(new Persona(1, "Juan Perez", new Fecha(1, 1, 2000)));
        arregloPersonas->agregar(new Persona(2, "Maria Lopez", new Fecha(2, 2, 2001)));
        arregloPersonas->agregar(new Persona(3, "Pedro Martinez", new Fecha(3, 3, 2002)));
        cout << arregloPersonas->toString() << endl;
        arregloPersonas->guardarArreglo();
        delete arregloPersonas;
    }
    else
    {
        ArregloPersonas *arregloPersonas = ArregloPersonas::cargarArreglo();
        arregloPersonas->agregar(new Persona(4, "Jose Gonzalez", new Fecha(4, 4, 2003)));
        cout << arregloPersonas->toString() << endl;
        delete arregloPersonas;
    }

    return 0;
}