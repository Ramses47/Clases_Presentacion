#include "Mimbros.h"
Mimbros::Mimbros(std::string Nombre, std::string Direccion, int Telefono, int FechaRegistro, int IDMiembros,
	std::string titulo, int anioPublicacion, std::string genero, int cantidadDisponible, int ISBN,
	std::string NombreAutor, std::string ApellidoAutor, int FechaNacimiento, int IDAutor)
	: Libros(NombreAutor, ApellidoAutor, FechaNacimiento, IDAutor, titulo, anioPublicacion, genero, cantidadDisponible, ISBN) {
	this->Nombre = Nombre;
	this->Direccion = Direccion;
	this->Telefono = Telefono;
	this->FechaRegistro = FechaRegistro;
	this->IDMiembros = IDMiembros;
}

Mimbros::~Mimbros() {

}