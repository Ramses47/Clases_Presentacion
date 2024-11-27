#pragma once
#include <iostream>
#include <string>
#include "Libros.h"

class Mimbros : public Libros
{
private:
	std::string Nombre;
	std::string Direccion;
	int Telefono;
	int FechaRegistro;
	int IDMiembros;

public:
	Mimbros(std::string Nombre, std::string Direccion, int Telefono, int FechaRegistro, int IDMiembros,
		std::string titulo, int anioPublicacion, std::string genero, int cantidadDisponible, int ISBN,
		std::string NombreAutor, std::string ApellidoAutor, int FechaNacimiento, int IDAutor)
		: Libros(NombreAutor, ApellidoAutor, FechaNacimiento, IDAutor, titulo, anioPublicacion, genero, cantidadDisponible, ISBN) 
	{
		this->Nombre = Nombre;
		this->Direccion = Direccion;
		this->Telefono = Telefono;
		this->FechaRegistro = FechaRegistro;
		this->IDMiembros = IDMiembros;
	}

	std::string getNombre() {
		return Nombre;
	}
	std::string getDirecion() {
		return Direccion;
	}
	int getTelefono() {
		return Telefono;
	}
	int getFechaRegistro() {
		return FechaRegistro;
	}
	int getIDMiembros() {
		return IDMiembros;
	}

	void setNombre(std::string Nombre) {
		this->Nombre = Nombre;
	}
	void setDirecion(std::string Direcion) {
		this->Direccion = Direcion;
	}
	void setTelefono(int Telefono) {
		this->Telefono = Telefono;
	}
	void setFechaRegistro(int FechaRegistro) {
		this->FechaRegistro = FechaRegistro;
	}
	void setIDMiembros(int IDMiembros) {
		this->IDMiembros = IDMiembros;
	}
	~Mimbros() {

	}

};