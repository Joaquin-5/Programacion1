#include <iostream>
#include <windows.h>
using namespace std;

void interseccion(const int vecA[], int cantA, const int vecB[], int cantB, int vecInterseccion[], int &cantRes)
{
    int i = 0, j = 0;

    while (i < cantA && j < cantB)
    {
        if (vecA[i] < vecB[j])
        {
            i++;
        }
        else if (vecA[i] > vecB[j])
        {
            j++;
        }
        else
        {
            vecInterseccion[cantRes] = vecA[i];
            i++;
            j++;
            cantRes++;
        }
    }
}

void mostrarInterseccion(int vec[], int cant)
{
    cout << "Intersección de usuarios con el mismo DNI:" << endl;
    for (int i = 0; i < cant; i++)
    {
        cout << vec[i] << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int MAX = 100;
    int listadoDNIsApp1[MAX] = {25123456, 28987654, 31234567, 35678901, 40123456};
    int listadODNIsApp2[MAX] = {24321098, 25123456, 28987654, 31234567, 33456789, 38901234, 40123456, 42567890};

    int cantRes = 0;
    int listadoDNIsInterseccion[MAX];

    interseccion(listadoDNIsApp1, 5, listadODNIsApp2, 8, listadoDNIsInterseccion, cantRes);
    mostrarInterseccion(listadoDNIsInterseccion, cantRes);

    return 0;
}