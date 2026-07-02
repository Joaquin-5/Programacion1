#include <iostream>
#include <windows.h>
using namespace std;

void cantidadDeCorte(int &cantidadApellidos)
{
    do
    {
        cout << "Ingrese la cantidad de apellidos a cargar (1-100): ";
        cin >> cantidadApellidos;
    } while (cantidadApellidos < 1 || cantidadApellidos > 100);
}

void cargaDeApellidos(string vec[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << "Ingrese un apellido: " << endl;
        cin >> vec[i];
    }
}

void ordenarAlfabeticamente(string vec[], int n)
{
    int i = 0;
    string aux;
    bool ordenado = false;
    while (i < n - 1 && !ordenado)
    {
        ordenado = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
}

bool estaEnLaLista(string vec[], int n, string apellidoABuscar)
{
    int inicio = 0;
    int fin = n - 1;

    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;

        if (vec[mitad] == apellidoABuscar)
            return true;

        if (vec[mitad] > apellidoABuscar)
        {
            fin = mitad - 1;
        }
        else
        {
            inicio = mitad + 1;
        }
    }

    return false;
}

void mostrarResultados(string vec[], int cant)
{
    // Listado de apellidos completo y ordenado
    cout << "Listado de apellidos completo y ordenado alfabéticamente" << endl;
    ordenarAlfabeticamente(vec, cant);
    for (int i = 0; i < cant; i++)
    {
        cout << vec[i] << endl;
    }

    // Consulta de apellido para saber si está en el listado
    string apellido = "";
    cout << "Ingrese un apellido para saber si está en el listado" << endl;
    cin >> apellido;
    if (estaEnLaLista(vec, cant, apellido))
    {
        cout << "El apellido " << apellido << " se encuentra en la lista" << endl;
    }
    else
    {
        cout << "No se encontró el apellido a buscar" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    const int MAX = 100;
    int cantidadApellidos = 0;
    string apellidos[MAX];

    cantidadDeCorte(cantidadApellidos);
    cargaDeApellidos(apellidos, cantidadApellidos);
    mostrarResultados(apellidos, cantidadApellidos);

    return 0;
}