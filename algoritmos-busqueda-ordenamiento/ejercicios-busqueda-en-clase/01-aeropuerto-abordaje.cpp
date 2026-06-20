#include <iostream>
#include <windows.h>
using namespace std;

void pedirAsiento(int &asientoAbuscar);
int busquedaLineal(const int asientos[], int cant, int asientoPersona);
void mostrarResultado(int asiento, int indice);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int CANTASIENTOS = 8;
    const int asientos[CANTASIENTOS] = {550, 102, 999, 308, 704, 205, 612, 401};
    int asientoAbuscar = 0, indiceAsiento = 0;

    pedirAsiento(asientoAbuscar);

    indiceAsiento = busquedaLineal(asientos, CANTASIENTOS, asientoAbuscar);

    mostrarResultado(asientoAbuscar, indiceAsiento);

    return 0;
}

void pedirAsiento(int &asientoAbuscar)
{
    cout << "Ingrese su número de asiento" << endl;
    cin >> asientoAbuscar;
}

int busquedaLineal(const int asientos[], int cant, int asientoPersona)
{
    for (int i = 0; i < cant; i++)
    {
        if (asientos[i] == asientoPersona)
        {
            return i;
        }
    }

    return -1;
}

void mostrarResultado(int asiento, int indice) {
    if (indice != -1)
    {
        cout << "Puede abordar. Su asiento está en la posición de la fila: " << indice + 1 << endl;
    }
    else
    {
        cout << "El asiento " << asiento << " no está en la lista de asientos, no puede abordar" << endl;
    }
}