#include <iostream>
using namespace std;

int busquedaLineal(const int asientos[], int asientoPersona);

int main()
{
    const cantAsientos = 8;
    const int asientos[cantAsientos] = {102, 205, 308, 401, 550, 612, 704, 999};
    int asientoAbuscar = 0, indiceAsiento = 0;

    cout << "Ingrese su número de asiento" << endl;
    cin >> asientoAbuscar;

    indiceAsiento = busquedaLineal(asientos, asientoAbuscar);

    if (indiceAsiento != -1)
    {
        cout << "Puede abordar, su asiento se encuentra en la fila " << indiceAsiento << endl;
    }
    else
    {
        cout << "El asiento " << asientoAbuscar << " no está en la lista de asientos, no puede abordar" << endl;
    }

    return 0;
}

int busquedaLineal(const int asientos[], int asientoPersona)
{
    for (int i = 0; i < 8; i++)
    {
        if (asientos[i] == asientoPersona)
        {
            return i + 1;
        }
    }

    return -1;
}