
#include "Persona.h"

// Constructor
Persona::Persona() {
}

Persona::Persona(string Nombre, string Apellido, int Cedula) {
	this->Nombre = Nombre ;
	this->Apellido = Apellido ;
	this->Cedula = Cedula ; 
}
	
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////

// SETTERS
void Persona::setNombre(string Nombre) {
	this->Nombre = Nombre ;
}

void Persona::setApellido(string Apellido) {
	this->Apellido = Apellido ;
}

void Persona::setCedula(int Cedula) {
	this->Cedula = Cedula ;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////

// GETTERS
string Persona::getNombre() {
	return this->Nombre ;
}

string Persona::getApellido(){
	return this->Apellido ;
}

int Persona::getCedula() {
	return this->Cedula ;
}

	

////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Destructor	
Persona::~Persona() {
	
}

