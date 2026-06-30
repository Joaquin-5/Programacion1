#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

const int TURNOSTRABAJO = 3;
const int CANTARTICULOS = 2;

void cargaDeDatos(int prod[][CANTARTICULOS], int fallas[][CANTARTICULOS], const string turnos[], const string articulos[])
{
    cout << "Carga de la producción total de mesas y sillas" << endl;
    for (int i = 0; i < TURNOSTRABAJO; i++)
    {
        for (int j = 0; j < CANTARTICULOS; j++)
        {
            // Producción
            cout << "Ingrese la cantidad de " << articulos[j] << " producidas en el turno " << turnos[i] << endl;
            cin >> prod[i][j];

            // Fallas
            cout << "Ingrese la cantidad de " << articulos[j] << " con fallas producidas en el turno " << turnos[i] << endl;
            cin >> fallas[i][j];
        }
    }
}

int totalArticulosFallados(int mat[][CANTARTICULOS])
{
    int total = 0;
    for (int i = 0; i < TURNOSTRABAJO; i++)
    {
        for (int j = 0; j < CANTARTICULOS; j++)
        {
            total += mat[i][j];
        }
    }
    return total;
}

int mayorCantidadSillas(int mat[][CANTARTICULOS])
{
    int mayorCantidadSillas = mat[0][0];
    int turno = -1;

    for (int i = 1; i < TURNOSTRABAJO; i++)
    {
        if (mat[i][0] > mayorCantidadSillas)
        {
            mayorCantidadSillas = mat[i][0];
            turno = i;
        }
    }

    return turno;
}

void mostrarResultados(int prod[][CANTARTICULOS], int fallas[][CANTARTICULOS])
{
    // Listado de la producción neta (Producción - Fallas) en cada turno
    int mañana = 0, tarde = 0, noche = 0;
    for (int i = 0; i < TURNOSTRABAJO; i++)
    {
        for (int j = 0; j < CANTARTICULOS; j++)
        {
            switch (i)
            {
            case 0:
                mañana = prod[i][j] - fallas[i][j];
                break;
            case 1:
                tarde = prod[i][j] - fallas[i][j];
                break;
            case 2:
                noche = prod[i][j] - fallas[i][j];
                break;

            default:
                break;
            }
        }
    }
    cout << "Producción neta por la mañana: " << mañana << endl;
    cout << "Producción neta por la tarde: " << tarde << endl;
    cout << "Producción neta por la noche: " << noche << endl
         << endl;

    // Total de artículos fallados
    cout << "Cantidad de artículos fallados: " << totalArticulosFallados(fallas) << endl
         << endl;

    // Turno con mayor cantidad de sillas
    int turno = mayorCantidadSillas(prod);
    string turnoMayorCantidadSillas = "";
    switch (turno)
    {
    case 0:
        turnoMayorCantidadSillas = "mañana";
        break;
    case 1:
        turnoMayorCantidadSillas = "tarde";
        break;
    case 2:
        turnoMayorCantidadSillas = "noche";
        break;
    default:
        break;
    }
    cout << "Turno con mayor cantidad de sillas " << turnoMayorCantidadSillas << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string turnos[] = {"mañana", "tarde", "noche"};
    string articulos[] = {"sillas", "mesas"};

    int produccion[TURNOSTRABAJO][CANTARTICULOS];
    int fallas[TURNOSTRABAJO][CANTARTICULOS];

    cargaDeDatos(produccion, fallas, turnos, articulos);
    mostrarResultados(produccion, fallas);

    return 0;
}