#pragma once
#include <iostream>
#include <string>
#include "Mimbros.h"
class Prestamos : public Mimbros
{
private:
	int IDPrestamo;
	int FechaPrestamo;
	int FechaDevolucion;

public:
	Prestamos(int IDPrestamo, int FechaPrestamo, int FechaDevolucion, std::string Nombre, std::string Direccion, int Telefono, int FechaRegistro, int IDMiembros,
		std::string titulo, int anioPublicacion, std::string genero, int cantidadDisponible, int ISBN,
		std::string NombreAutor, std::string ApellidoAutor, int FechaNacimiento, int IDAutor) 
		: Mimbros(NombreAutor, ApellidoAutor, FechaNacimiento, IDAutor, titulo, anioPublicacion, 
			genero, cantidadDisponible, ISBN, Nombre, Direccion, Telefono, FechaRegistro, IDMiembros) {
		this->IDPrestamo = IDPrestamo;
		this->FechaPrestamo = FechaPrestamo;
		this->FechaDevolucion = FechaDevolucion;
	}

	int getIDPrestamo() {
		return IDPrestamo;
	}
	int getFechaPrestamo() {
		return FechaPrestamo;
	}
	int getFechaDevolucion() {
		return FechaDevolucion;
	}

	void setIDPrestamo(int IDPrestamo) {
		this->IDPrestamo = IDPrestamo;
	}
	void setFechaPrestamo(int FechaPrestamo) {
		this->FechaPrestamo = FechaPrestamo;
	}
	void setFechaDevolucion(int FechaDevolucion) {
		this->FechaDevolucion = FechaDevolucion;
	}

	~Prestamos() {

	}
};

