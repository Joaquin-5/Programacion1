#include <iostream>
#include <windows.h>
using namespace std;

struct Gasto
{
    int idDepartamento;
    int idEmpleado;
    float importeGasto;
};

void listarGastosDepartamentos(Gasto vec[], int n)
{
    int i = 0;
    int key;
    float gastosPorDepartamento = 0;
    float gastosTotales = 0;

    while (i < n)
    {
        key = vec[i].idDepartamento;
        gastosPorDepartamento = 0;

        cout << "Departamento: " << key << endl;
        while (i < n && vec[i].idDepartamento == key)
        {
            cout << "Empleado: " << vec[i].idEmpleado
                 << " - Importe: $" << vec[i].importeGasto << endl;
            gastosPorDepartamento += vec[i].importeGasto;
            gastosTotales += vec[i].importeGasto;
            i++;
        }
        cout << "Gasto departamento: $" << gastosPorDepartamento << endl;
        cout << endl;
    }

    cout << "Total de gastos de la empresa: $" << gastosTotales << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Gasto gastos[12] =
        {
            {101, 1001, 1250.50f},
            {101, 1004, 890.00f},
            {101, 1012, 1540.75f},

            {102, 1002, 2100.00f},
            {102, 1008, 450.25f},

            {103, 1003, 980.40f},
            {103, 1006, 1325.90f},
            {103, 1010, 760.00f},

            {104, 1005, 3100.80f},

            {105, 1007, 670.50f},
            {105, 1009, 2450.00f},
            {105, 1011, 1180.35f}};

    listarGastosDepartamentos(gastos, 12);

    return 0;
}