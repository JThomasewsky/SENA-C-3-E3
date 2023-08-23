#include "animal.h"

Animal::Animal(const std::string& _nombre, int _edad) : nombre(_nombre), edad(_edad) {}

Mamifero::Mamifero(const std::string& _nombre, int _edad, const std::string& _colorPelo)
    : Animal(_nombre, _edad), colorPelo(_colorPelo) {}

Ave::Ave(const std::string& _nombre, int _edad, const std::string& _tipoAlas)
    : Animal(_nombre, _edad), tipoAlas(_tipoAlas) {}

Reptil::Reptil(const std::string& _nombre, int _edad, int _cantidadDientes)
    : Animal(_nombre, _edad), cantidadDientes(_cantidadDientes) {}

