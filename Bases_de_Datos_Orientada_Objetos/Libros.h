#include <iostream>
#include <string>
#include "Autores.h"

class Libros : public Autores {
private:
    std::string titulo;
    int anioPublicacion;
    std::string genero;
    int cantidadDisponible;
    int ISBN;

public:

    Libros(std::string titulo, int anioPublicacion, int idAutor, std::string genero, int cantidadDisponible, int ISBN, std::string NombreAutor, std::string ApellidoAutor, int FechaNacimiento, int IDAutor) 
        : Autores(NombreAutor, ApellidoAutor, FechaNacimiento, IDAutor) {
        this->titulo = titulo;
        this->anioPublicacion = anioPublicacion;
        this->genero = genero;
        this->cantidadDisponible = cantidadDisponible;
        this->ISBN = ISBN;
    }

    std::string getTitulo() { 
        return titulo; 
    }
    int getAnioPublicacion() { 
        return anioPublicacion; 
    }
    std::string getGenero() { 
        return genero; 
    }
    int getCantidadDisponible() {
        return cantidadDisponible; 
    }
    int getISBN() {
        return ISBN;
    }
    void setTitulo(std::string titulo) { 
        this->titulo = titulo; 
    }
    void setAnioPublicacion(int anioPublicacion) { 
        this->anioPublicacion = anioPublicacion; 
    }
    void setGenero(std::string genero) { 
        this->genero = genero; 
    }
    void setCantidadDisponible(int cantidadDisponible) { 
        this->cantidadDisponible = cantidadDisponible; 
    }
    void setISBN(int ISBN) {
        this->ISBN = ISBN;
    }
    ~Libros() {

    }
};