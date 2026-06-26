#include <iostream>
#include <windows.h>
using namespace std;

void pedirCodigoDeProducto(int &codProductoABuscar)
{
    cout << "Ingrese el código de producto a buscar" << endl;
    cin >> codProductoABuscar;
}

int busquedaCodigo(int arr[], int cant, int codigoABuscar)
{
    int inicio = 0;
    int fin = cant - 1;

    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;

        // Si el elemento es el del medio, devolvemos la posición
        if (arr[mitad] == codigoABuscar)
            return mitad;

        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (arr[mitad] > codigoABuscar)
        {
            fin = mitad - 1; // Cambio el limite superior
        }
        else
        {
            inicio = mitad + 1; // Cambio el limite inferior
        }
    }

    // Si se llega hasta esta línea quiere decir que el código no estaba en la lista
    return -1;
}

void mostrarResultado(int codABuscar, int pos)
{
    if (pos != -1)
    {
        cout << "Se encontró el código " << codABuscar << ", en la posición: " << pos << endl;
    }
    else
    {
        cout << "No se encontró el código " << codABuscar << " en la lista";
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int CANTCODIGOS = 10;
    int codigosProductos[CANTCODIGOS] = {1015, 2022, 3045, 4001, 5012, 6120, 7235, 8100, 9312, 9999};
    int codProductoABuscar = 0;
    int pos = 0;

    pedirCodigoDeProducto(codProductoABuscar);

    pos = busquedaCodigo(codigosProductos, CANTCODIGOS, codProductoABuscar);

    mostrarResultado(codProductoABuscar, pos);

    return 0;
}