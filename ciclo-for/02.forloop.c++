#include <iostream>

int main()
{
    // Muestra por consola números pares del 1 al 12 (Ascendente)
    /* std::cout << "Los números pares del 1 al 12: " << std::endl;
     for (int i = 2; i < 13; i += 2)
    {
        std::cout << i << std::endl;
    } */

    // Muestra por consola números pares del 12 al 1 (Descendente)
    std::cout << "Los números pares del 12 al 1: " << std::endl;
    for (int i = 12; i >= 1; i += -2)
    {
        std::cout << i << std::endl;
    }

    return 0;
}