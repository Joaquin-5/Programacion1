#include <iostream>
#include <windows.h>
using namespace std;

/*
    Se eligió la búsqueda binaria porque el enunciado indica que el catálogo se mantiene ordenado de menor a mayor de forma permanente, que es justamente la precondición que este algoritmo necesita para funcionar. Al estar garantizado ese orden, la binaria permite encontrar cualquier código en un máximo de log₂(500) ≈ 9 comparaciones, muy por debajo de las hasta 500 comparaciones que podría requerir una búsqueda secuencial.
    Se descartó la búsqueda secuencial porque, si bien técnicamente funcionaría sobre este vector, desaprovecharía por completo la información de que los datos están ordenados, resultando en un algoritmo mucho menos eficiente sin ninguna ventaja a cambio.
    Se descartó PUP porque no se cuenta con información sobre un rango de códigos conocido y completo (no se sabe si los códigos de repuesto son consecutivos ni cuál sería su valor inicial), por lo que no es posible establecer una equivalencia directa entre código y posición en el vector.
*/

int busquedaCodigoRepuesto(int codigos[], int cantCodigos, int codigoABuscar) {
    int inicio = 0;
    int fin = cantCodigos - 1;
    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;
        if (codigos[mitad] == codigoABuscar) {
            return mitad;
        }
        if (codigos[mitad] > codigoABuscar) {
            fin = mitad - 1;
        } else {
            inicio = mitad + 1;
        }
    }
    return -1;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int CANTARTICULOS = 500;
    int codigosArticulos[CANTARTICULOS] = {1023, 1450, 1789, 2035, 2560, 3098, 4122, 5876, 6901, 8450};
    int codigoABuscar = 0, encontrado = 0;

    cout << "Ingrese el código del artículo de repuesto a buscar" << endl;
    cin >> codigoABuscar;

    encontrado = busquedaCodigoRepuesto(codigosArticulos, 10, codigoABuscar);

    if (encontrado != -1) {
        cout << "Se encontró el código de repuesto, con el número de lista: " << encontrado + 1 << endl;
    } else {
        cout << "No se encontró el código de repuesto" << endl;
    }

    return 0;
}