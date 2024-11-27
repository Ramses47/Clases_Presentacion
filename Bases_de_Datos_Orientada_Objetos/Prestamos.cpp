#include "Prestamos.h"
Prestamos::Prestamos(int IDPrestamo, int FechaPrestamo, int FechaDevolucion, std::string Nombre, std::string Direccion, int Telefono, int FechaRegistro, int IDMiembros,
	std::string titulo, int anioPublicacion, std::string genero, int cantidadDisponible, int ISBN,
	std::string NombreAutor, std::string ApellidoAutor, int FechaNacimiento, int IDAutor)
	: Mimbros(NombreAutor, ApellidoAutor, FechaNacimiento, IDAutor, titulo, anioPublicacion,
		genero, cantidadDisponible, ISBN, Nombre, Direccion, Telefono, FechaRegistro, IDMiembros) {
	this->IDPrestamo = IDPrestamo;
	this->FechaPrestamo = FechaPrestamo;
	this->FechaDevolucion = FechaDevolucion;
}

Prestamos::~Prestamos() {

}