#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    std::string nombre;
    int edad;

    Animal(const std::string& _nombre, int _edad);
};

class Mamifero : public Animal {
public:
    std::string colorPelo;

    Mamifero(const std::string& _nombre, int _edad, const std::string& _colorPelo);
};

class Ave : public Animal {
public:
    std::string tipoAlas;

    Ave(const std::string& _nombre, int _edad, const std::string& _tipoAlas);
};

class Reptil : public Animal {
public:
    int cantidadDientes;

    Reptil(const std::string& _nombre, int _edad, int _cantidadDientes);
};

#endif

