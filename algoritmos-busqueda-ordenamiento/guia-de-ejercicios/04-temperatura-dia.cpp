#include <iostream>
#include <windows.h>
using namespace std;

/*
    Para resolver este problema se eligió la búsqueda secuencial, ya que no requiere ninguna precondición sobre el orden o la naturaleza de los valores, siendo la única opción válida dado que los otros dos métodos no pueden aplicarse.
    Se descartó PUP porque no existe una equivalencia directa entre el valor buscado (la temperatura de 40°) y una posición del vector — no hay forma de calcular en qué día se registró esa temperatura sin recorrer el vector.
    Se descartó la búsqueda binaria porque, si bien el vector tiene un orden cronológico (día 1, día 2, etc.), las temperaturas no están garantizadas de menor a mayor por valor. El hecho de que el vector esté ordenado por día no implica que las temperaturas sean crecientes, por lo que la binaria no puede descartar mitades correctamente.
*/

int busquedaTemperatura(float temperaturas[], int cant, float tempABuscar)
{
    for (int i = 0; i < cant; i++)
    {
        if (temperaturas[i] == tempABuscar)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int DIAS = 31;
    float temperaturas[DIAS] = {-2, 0, 3, 5, 7, 9, 11, 13, 15.3, 17, 18, 19, 20.5, 21, 22, 23, 24.7, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 40, 38};
    float tempABuscar = 0;
    int pos = 0;

    cout << "Ingrese la temperatura a buscar:" << endl;
    cin >> tempABuscar;

    pos = busquedaTemperatura(temperaturas, DIAS, tempABuscar);

    if (pos != -1)
    {
        cout << "Se encontró la temperatura: " << tempABuscar << "°, en el día: " << pos + 1;
    }
    else
    {
        cout << "No se encontró la temperatura a buscar...";
    }

    return 0;
}