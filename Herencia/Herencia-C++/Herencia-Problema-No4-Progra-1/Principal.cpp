#include"Estudiante.h"
#include"ProfUniversitario.h"
#include"AdmUniversitario.h"

int main() {
    cout << "---------------Creacion de 3 objetos------------------" << endl;
    cout << endl;
    cout << "1- Creacion de un Estudiante..." << endl;
   Estudiante* est1 = new Estudiante("1-0000-0000", "Nombre Comun 1", "Carrera Cualquiera 1", 18);

    cout << "2- Creacion de un Profesor Universitario...." << endl;
    ProfUniversitario* pro1 = new ProfUniversitario("1-1000-0000", "Nombre Comun 2", 2, true, "Dr.");

    cout << "3- Creacion de un Administrador Universitario...." << endl;
    AdmUniversitario * adm1 = new AdmUniversitario("1-2000-0000", "Nombre Comun 3", 3, "Lic. en Admin", 2);

    system("cls");
    
    cout << "------------------------------------------------------" << endl;
    cout << endl;
    cout << "--------------IMPRESION DE UNIVERSITARIOS-------------" << endl;
    cout << endl;

    cout << "Impresion de un Estudiante..." << endl;
    cout << est1->toString() << endl;

    cout << "Impresion de un profesor universitario...." << endl;
    cout << pro1->toString() << endl;

    cout << "Impresion de un administrador universitario..." << endl;
    cout << adm1->toString() << endl;

    cout << "Eliminar personas universitarias..." << endl;
    delete est1;
    delete pro1;
    delete adm1;

    system("pause");
    return 0;
}