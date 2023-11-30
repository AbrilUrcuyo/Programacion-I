#include "Persona.h"

Persona::Persona(
    int id,
    string nombreCompleto,
    Fecha *fechaNacimiento)
{
    this->id = new int(id);

    if (nombreCompleto.length() > LONGITUD_MAXIMA_STRING)
    {
        nombreCompleto = nombreCompleto.substr(0, LONGITUD_MAXIMA_STRING);
    }
    this->nombreCompleto = new string(nombreCompleto);
    this->fechaNacimiento = fechaNacimiento;
}

int Persona::getId()
{
    return *id;
}

void Persona::setId(int id)
{
    delete this->id;
    this->id = new int(id);
}

string Persona::getNombreCompleto()
{
    return *nombreCompleto;
}

void Persona::setNombreCompleto(string nombreCompleto)
{
    delete this->nombreCompleto;
    this->nombreCompleto = new string(nombreCompleto);
}

Fecha *Persona::getFechaNacimiento()
{
    return fechaNacimiento;
}

void Persona::setFechaNacimiento(Fecha *fechaNacimiento)
{
    delete this->fechaNacimiento;
    this->fechaNacimiento = fechaNacimiento;
}

void Persona::serializar(fstream &strm, Persona *persona)
{
    int id = persona->getId();
    strm.write(reinterpret_cast<char *>(&id), sizeof(int));

    string nombreCompleto = persona->getNombreCompleto();
    const char *nombreCompletoCStr = nombreCompleto.c_str();
    strm.write(nombreCompletoCStr, LONGITUD_MAXIMA_STRING);

    Fecha::serializar(strm, persona->getFechaNacimiento());
}

Persona *Persona::deserializar(fstream &strm)
{
    int id;
    strm.read(reinterpret_cast<char *>(&id), sizeof(int));

    char nombreCompleto[LONGITUD_MAXIMA_STRING];
    strm.read(nombreCompleto, LONGITUD_MAXIMA_STRING);

    Fecha *fechaNacimiento = Fecha::deserializar(strm);

    return new Persona(id, nombreCompleto, fechaNacimiento);
}

string Persona::toString()
{
    stringstream ss;
    ss << "Persona" << endl;
    ss << "\tID: " << *id << endl;
    ss << "\tNombre completo: " << *nombreCompleto << endl;
    ss << "\tFecha de nacimiento: " << fechaNacimiento->toString();
    return ss.str();
}

Persona::~Persona()
{
    delete id;
    delete nombreCompleto;
    delete fechaNacimiento;
}