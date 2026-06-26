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

void pedirNumeroABuscar(int &numABuscar)
{
    cout << "Ingrese el número a buscar:" << endl;
    cin >> numABuscar;
}

bool busquedaNumero(const int arr[], int cant, int numABuscar, int &repeticiones, int &primeraAparicion)
{ // Utilizo la búsqueda secuencial
    for (int i = 0; i < cant; i++)
    {
        if (arr[i] == numABuscar)
        {
            repeticiones++;
            if (primeraAparicion == -1)
            {
                primeraAparicion = i;
            }
        }
    }

    return repeticiones > 0;
}

void mostrarResultado(bool encontrado, int numABuscar, int pos, int rep)
{
    if (encontrado)
    {
        cout << "Se encontró el número: " << numABuscar << ", por primera vez en la posición: " << pos << ", repeticiones: " << rep << endl;
    }
    else
    {
        cout << "No se encontró el número " << numABuscar << " en el vector." << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int MAX = 100;
    int cantidad = 0;
    int numeros[MAX];
    int numeroABuscar = 0;
    int repeticiones = 0;
    int primeraAparicion = -1;
    bool encontrado = false;

    cantNumerosAIngresar(cantidad);
    cargarVector(numeros, cantidad);
    pedirNumeroABuscar(numeroABuscar);
    encontrado = busquedaNumero(numeros, cantidad, numeroABuscar, repeticiones, primeraAparicion);
    mostrarResultado(encontrado, numeroABuscar, primeraAparicion, repeticiones);

    return 0;
}