#include "Libros.h"
Libros::Libros(std::string titulo, int anioPublicacion, int idAutor, std::string genero, int cantidadDisponible, int ISBN, std::string NombreAutor, std::string ApellidoAutor, int FechaNacimiento, int IDAutor)
    : Autores(NombreAutor, ApellidoAutor, FechaNacimiento, IDAutor) {
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
    this->genero = genero;
    this->cantidadDisponible = cantidadDisponible;
    this->ISBN = ISBN;
}

Libros::~Libros() {
}