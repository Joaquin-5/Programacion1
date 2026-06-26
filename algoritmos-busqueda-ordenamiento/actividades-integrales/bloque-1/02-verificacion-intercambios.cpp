#include <iostream>
#include <windows.h>
using namespace std;

void cantNumerosAIngresar(int &cantidad)
{
    do
    {
        cout << "Ingrese la cantidad de números (1-100): ";
        cin >> cantidad;
    } while (cantidad < 1 || cantidad > 100);
}

void cargarVector(int vec[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << "Ingrese un número: ";
        cin >> vec[i];
    }
}

void ordenamientoBurbuja(int arr[], int cant, int &intercambios)
{
    intercambios = 0;
    int i, j, aux;
    i = 0;
    bool ordenado = false;
    while (i < cant && !ordenado) 
    { // Burbujero mejorado
        ordenado = true;
        for (j = 0; j < cant - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                intercambios++;
                ordenado = false;
            }
        }
        i++;
    }
}

void mostrarResultado(int arr[], int cant, int inter)
{
    cout << "Vector ordenado: ";
    for (int i = 0; i < cant; i++)
    {
        cout << arr[i] << " ";
    }
    if (inter == 0)
    {
        cout << "No se realizaron intercambios";
    }
    else
    {
        cout << "Intercambios: " << inter;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int MAX = 100;
    int numeros[MAX];
    int cantidad = 0;
    int intercambios = 0;

    cantNumerosAIngresar(cantidad);
    cargarVector(numeros, cantidad);
    ordenamientoBurbuja(numeros, cantidad, intercambios);
    mostrarResultado(numeros, cantidad, intercambios);

    return 0;
}