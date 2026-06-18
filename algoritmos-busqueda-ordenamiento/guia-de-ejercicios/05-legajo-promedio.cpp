#include <iostream>
#include <windows.h>
using namespace std;

/*
    Se utiliza búsqueda por Posición Única Predecible (PUP) ya que los legajos pertenecen a un rango conocido y consecutivo (2000–2050). Esto permite calcular directamente la posición en el vector mediante la fórmula posición = legajo - 2000, evitando recorrer el arreglo y logrando una complejidad O(1).
*/

bool buscarPromedio(float arr[], int legajo, float &promedio)
{
    if ((legajo < 2000) || (legajo > 2050))
        return false;

    int pos = legajo - 2000;
    promedio = arr[pos];
    return true;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int CANTLEGAJOS = 51;
    float promedios[CANTLEGAJOS] = {6.5, 7.2, 8.1, 5.9, 6.8, 7.5, 4.3, 9.0, 8.7, 6.1, 7.9, 5.4, 6.6, 8.3, 7.0, 6.2, 9.5, 8.8, 7.3, 5.7, 6.9, 7.6, 8.0, 6.4, 5.8, 7.1, 8.9, 9.2, 6.7, 7.8, 5.5, 6.3, 7.4, 8.6, 9.1, 6.0, 7.7, 8.2, 5.6, 6.9, 7.2, 8.4, 9.3, 6.5, 7.0, 8.7, 5.9, 6.8, 7.6, 8.1, 9.4};
    int legajoIngresado = 0;
    float promedio = 0.0;

    cout << "Ingrese el número de legajo:" << endl;
    cin >> legajoIngresado;

    if (buscarPromedio(promedios, legajoIngresado, promedio))
    {
        cout << "El promedio es: " << promedio;
    }
    else
    {
        cout << "Legajo inválido";
    }

    return 0;
}