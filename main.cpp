#include <iostream>
#include "animal.h"

int main() {
    Mamifero perro("Perro", 5, "Marrón");
    Ave paloma("Paloma", 2, "Pequeñas");
    Reptil cocodrilo("Cocodrilo", 10, 80);

    std::cout << "Mamifero: " << perro.nombre << ", Edad: " << perro.edad << ", Color de Pelo: " << perro.colorPelo << std::endl;
    std::cout << "Ave: " << paloma.nombre << ", Edad: " << paloma.edad << ", Tipo de Alas: " << paloma.tipoAlas << std::endl;
    std::cout << "Reptil: " << cocodrilo.nombre << ", Edad: " << cocodrilo.edad << ", Cantidad de Dientes: " << cocodrilo.cantidadDientes << std::endl;

    return 0;
}

