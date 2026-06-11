#include <iostream>

void ordenarLibros(int arr[], int n) {
    // Tu código ACA: Implementar Insertion Sort
}

// Función auxiliar para mostrar el arreglo
void mostrarArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int TAMANIO = 6; // Para pensar: ¿ Que dijimos cuando vimos SOLID ?
    int libros[TAMANIO] = {45, 12, 89, 5, 23, 62};

    std::cout << "Códigos originales: ";
    mostrarArreglo(libros, TAMANIO);

    // ACA: Llamas a la función de ordenamiento

    std::cout << "Códigos ordenados de menor a mayor: ";
    mostrarArreglo(libros, TAMANIO);

    return 0;
}