#include <iostream>

int main() {
    // Validación de edad, ejercicio del power point
    int edad = 0;
    do
    {
        if (edad == 0) {
            std::cout << "Ingrese la edad entre los valores 0 y 120" << std::endl;
        } else {
            std::cout << "Vuelva a ingresar la edad entre los valores 0 y 120" << std::endl;
        }
        std::cin >> edad;
        if (edad < 0 || edad > 120) {
            std::cout << "La edad está por fuera del rango" << std::endl;
        }
    } while (edad < 0 || edad > 120); 
    
    return 0;
}