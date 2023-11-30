#include "Nodo.h"

Nodo::Nodo(Persona* p, Nodo* s)
{
	per = p;
	sig = s;
}
Nodo::Nodo()
{
	sig = nullptr;
}
/*
* Nodo::Nodo(Persona* p,Nodo* s): per(p),sig(s)
*/
Nodo::~Nodo() {


}
void Nodo::setsig(Nodo* n) { sig = n; }

void Nodo::setPer(Persona* p) { per = p; }

Persona* Nodo::getPer() { return per; }

Nodo* Nodo::getsig() { return sig; }