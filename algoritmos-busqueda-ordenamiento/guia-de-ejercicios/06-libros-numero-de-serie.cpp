#include <iostream>
#include <windows.h>
using namespace std;

/*
    El mejor algoritmo de búsqueda parta resolver este problema es el algoritmo de búsqueda binaria:
    Cumplimiento de la Precondición: El enunciado especifica claramente que el inventario de 1000 libros se encuentra organizado de manera ascendente (ordenado por número de serie). La búsqueda binaria requiere de forma obligatoria que el arreglo esté ordenado para poder funcionar. Al cumplirse esta condición, se convierte en la opción ideal por las demás opciones
*/

int buscarLibro(int arr[], int cantNumSerie, int codigoABuscar)
{
    int inicio = 0;
    int fin = cantNumSerie - 1;

    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;

        if (arr[mitad] == codigoABuscar)
            return mitad;

        if (arr[mitad] > codigoABuscar)
        {
            fin = mitad - 1;
        }
        else
        {
            inicio = mitad + 1;
        }
    }

    return -1;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int CANTLIBROS = 10;
    int numerosSerieLibros[CANTLIBROS] = {20260001, 20260037, 20260112, 20260245, 20260308, 20260476, 20260533, 20260789, 20260854, 20260991};
    int numSerieABuscar = 0, pos = 0;

    cout << "Ingrese el número de código" << endl;
    cin >> numSerieABuscar;

    pos = buscarLibro(numerosSerieLibros, CANTLIBROS, numSerieABuscar);

    if (pos != -1)
    {
        cout << "Se encontró el número de serie en la posición: " << pos;
    }
    else
    {
        cout << "No se encontró el número de serie" << endl;
    }

    return 0;
}