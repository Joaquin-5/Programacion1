#include <iostream>
#include <windows.h>
using namespace std;

struct Articulo
{
    int idArticulo;
    int cantidad;
};

void apareo(const Articulo vecA[], int cantA, const Articulo vecB[], int cantB, Articulo res[], int &cantRes)
{
    int i = 0, j = 0;

    while (i < cantA && j < cantB)
    {
        if (vecA[i].idArticulo < vecB[j].idArticulo)
        {
            res[cantRes] = vecA[i];
            i++;
        }
        else if (vecA[i].idArticulo > vecB[j].idArticulo)
        {
            res[cantRes] = vecB[j];
            j++;
        }
        else
        {
            res[cantRes].idArticulo = vecA[i].idArticulo;
            res[cantRes].cantidad = vecA[i].cantidad + vecB[j].cantidad;
            i++;
            j++;
        }
        cantRes++;
    }

    while (i < cantA)
    {
        res[cantRes] = vecA[i];
        i++;
        cantRes++;
    }

    while (j < cantB)
    {
        res[cantRes] = vecB[j];
        j++;
        cantRes++;
    }
}

void mostrarResultados(Articulo res[], int cantRes)
{
    cout << "Vector resultante del apareo de los vectores A y B" << endl
         << endl;
    for (int i = 0; i < cantRes; i++)
    {
        cout << "ID artículo: " << res[i].idArticulo << endl;
        cout << "Cantidad: " << res[i].cantidad << endl
             << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int MAX = 100;
    Articulo artiuclosA[MAX] = {{101, 12}, {205, 8}, {318, 25}, {470, 15}};
    Articulo articulosB[MAX] = {{115, 10}, {205, 18}, {289, 7}, {470, 9}, {512, 30}, {680, 14}};

    int cantRes = 0;
    Articulo articulosUnificados[MAX];

    apareo(artiuclosA, 4, articulosB, 6, articulosUnificados, cantRes);
    mostrarResultados(articulosUnificados, cantRes);
    return 0;
}