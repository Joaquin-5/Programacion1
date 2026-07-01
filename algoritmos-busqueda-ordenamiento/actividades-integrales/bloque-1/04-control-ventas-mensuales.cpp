#include <iostream>
#include <windows.h>
using namespace std;

void cargarVentas(double vec[], int dias)
{
    int dia = 0;
    double importe = 0;
    while (dia != -1)
    {
        cout << "Ingrese el día en donde va cargar el importe, para finalizar la carga ingrese -1" << endl;
        cin >> dia;
        if (dia == -1)
            break;

        if (dia < 1 || dia > dias)
        {
            cout << "Día inválido." << endl;
            continue;
        }

        cout << "Ingrese el importe a cargar" << endl;
        cin >> importe;
        vec[dia - 1] += importe;
    }
}

double totalAcumulado(double vec[], int dias)
{
    double total = 0;
    for (int i = 0; i < dias; i++)
    {
        total += vec[i];
    }
    return total;
}

int diaMayorVenta(double vec[], int dias)
{
    double importeVentaMayor = vec[0];
    int diaVentaMayor = 0;
    for (int i = 0; i < dias; i++)
    {
        if (vec[i] > importeVentaMayor)
        {
            importeVentaMayor = vec[i];
            diaVentaMayor = i + 1;
        }
    }
    return diaVentaMayor;
}

void mostrarResultados(double vec[], int dias)
{
    // Se lista el importe de cada día
    cout << "Total acumulado en cada día:" << endl;
    for (int i = 0; i < dias; i++)
    {
        cout << "Día " << i + 1 << ": $" << vec[i] << endl;
    }
    cout << "" << endl;

    // Número del día donde se registró la venta mayor
    int ventaMayor = diaMayorVenta(vec, dias);
    if (ventaMayor == -1)
    {
        cout << "No se registraron ventas";
    }
    else
    {
        cout << "Día donde se registró la venta mayor " << ventaMayor << endl
             << endl;
    }

    // Listado de de días donde no se registró una venta
    cout << "Listado de días donde no se registró una venta" << endl;
    for (int i = 0; i < dias; i++)
    {
        if (vec[i] == 0)
        {
            cout << "Día " << i + 1 << endl;
        }
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int DIAS = 31;
    double ventas[DIAS] = {0};

    cargarVentas(ventas, DIAS);
    mostrarResultados(ventas, DIAS);

    return 0;
}