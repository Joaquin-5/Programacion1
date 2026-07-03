#include <iostream>
#include <windows.h>
using namespace std;

struct Pieza
{
    int nroLote;
    float pesoPieza;
};

void listarPiezas(const Pieza vec[], int n)
{
    int i = 0;
    int key = 0;

    int cantidadPiezas = 0;
    float sumaPesos = 0;
    float promedioPeso = 0;
    float piezaConMasPeso = 0;

    while (i < n)
    {
        key = vec[i].nroLote;

        sumaPesos = 0;
        cantidadPiezas = 0;
        promedioPeso = 0;
        piezaConMasPeso = vec[i].pesoPieza;

        while (i < n && vec[i].nroLote == key)
        {
            sumaPesos += vec[i].pesoPieza;
            cantidadPiezas++;

            if (vec[i].pesoPieza > piezaConMasPeso)
            {
                piezaConMasPeso = vec[i].pesoPieza;
            }

            i++;
        }
        promedioPeso = sumaPesos / cantidadPiezas;
        cout << "Lote: " << key << endl;
        cout << "Promedio: " << promedioPeso << endl;
        cout << "Pieza más pesada: " << piezaConMasPeso << endl;
        cout << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Pieza piezas[10] =
        {
            {1002, 2.35f},
            {1002, 1.80f},
            {1003, 3.12f},
            {1004, 2.95f},
            {1004, 4.08f},
            {1006, 1.56f},
            {1007, 2.71f},
            {1007, 3.89f},
            {1010, 2.24f},
            {1010, 4.50f}};

    listarPiezas(piezas, 10);

    return 0;
}