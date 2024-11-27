#pragma once
#include <iostream>
#include <string>

class Autores
{
	private:
		std::string NombreAutor;
		std::string ApellidoAutor;
		int FechaNacimiento;
		int IDAutor;
public:
	Autores(std::string NombreAutor, std::string ApellidoAutor, int FechaNacimiento, int IDAutor) {
		this->NombreAutor = NombreAutor;
		this->ApellidoAutor = ApellidoAutor;
		this->FechaNacimiento = FechaNacimiento;
		this->IDAutor = IDAutor;
	}

	std::string getNombreAutor() {
		return NombreAutor;
	}
	std::string getApellidoAutor() {
		return ApellidoAutor;
	}
	int getFechaNacimiento() {
		return FechaNacimiento;
	}
	int getIDAutor() {
		return IDAutor;
	}

	void setNombreAutor(std::string NombreAutor) {
		this->NombreAutor = NombreAutor;
	}
	void setApellidoAutor(std::string ApellidoAutor) {
		this->ApellidoAutor = ApellidoAutor;
	}
	void setFechaNacimiento(int FechaNacimiento) {
		this->FechaNacimiento = FechaNacimiento;
	}
	void setIDAutor(int IDAutor) {
		this->IDAutor = IDAutor;
	}
	~Autores() {

	}
};

