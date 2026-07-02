#include <iostream>
#include <windows.h>
using namespace std;

void cantidadDeCorte(int &cant)
{
    cout << "Ingrese la cantidad de números a ingresar" << endl;
    cin >> cant;
}

void cargaDeNumeros(int vec[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << "Ingrese un número entero" << endl;
        cin >> vec[i];
    }
}

void ordenamientoPorInsercion(int vec[], int cant)
{
    int i, key, j;
    for (int i = 0; i < cant; i++)
    {
        key = vec[i];
        j = i - 1;

        // Se mueven los elementos del vector (0..i-1), que son mas grande que key, a la posición siguiente a su posición actual
        while (j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}

int busquedaBinaria(int vec[], int cant, int numABuscar)
{
    int inicio = 0;
    int fin = cant - 1;

    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;

        // Si el elemento es del medio, se devuelve la posición
        if (vec[mitad] == numABuscar)
            return mitad;

        if (vec[mitad] > numABuscar)
        {
            fin = mitad - 1; // Se cambia el límite superior
        }
        else
        {
            inicio = mitad + 1; // Se cambia el límite inferior
        }
    }

    // Si no se encuentra el elemento se devuelve -1
    return -1;
}

void numeroABuscar(int vec[], int cant)
{
    // Listo el arreglo de números ordenado
    cout << "Arreglo de números ingresado anteriormente ordenado de forma ascendente" << endl;
    for (int i = 0; i < cant; i++)
    {
        cout << vec[i] << endl;
    }
    cout << "" << endl;

    // Se le solicita un valor al usuario para realizar la búsqueda en el arreglo
    int numABuscar = 0;
    cout << "Ingrese el número a buscar" << endl;
    cin >> numABuscar;
    int encontrado = busquedaBinaria(vec, cant, numABuscar);
    if (encontrado != -1)
    {
        cout << "Se encontró el número " << numABuscar << " en la posición " << encontrado << endl;
    }
    else
    {
        cout << "No se encontró el número " << numABuscar << "en el arreglo" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int MAX = 100;
    int cantNumeros = 0;
    int numeros[MAX];

    cantidadDeCorte(cantNumeros);
    cargaDeNumeros(numeros, cantNumeros);
    ordenamientoPorInsercion(numeros, cantNumeros);
    numeroABuscar(numeros, cantNumeros);

    return 0;
}