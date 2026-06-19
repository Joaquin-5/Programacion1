#include <iostream>
#include <windows.h>
using namespace std;

/*
    Búsqueda binaria: este algoritmo requiere que el vector esté ordenado (ascendente o descendente) para poder descartar mitades en cada comparación. En este caso, el enunciado indica que los números de carnet fueron cargados según la fecha de inscripción, por lo que no tienen un orden numérico. Al no cumplirse esta precondición, la búsqueda binaria no puede aplicarse correctamente.

    PUP: para usar este método se necesita que exista una equivalencia directa entre la clave (el número de carnet) y la posición en el vector, que el rango de valores posibles sea conocido de antemano y que dicho rango esté completo (sin "huecos"). Los números de carnet del ejemplo (504, 12, 1022, 5, 430) no son consecutivos ni responden a un rango acotado y conocido, por lo que no es posible establecer esa equivalencia clave-posición.
*/

int esSocio(int numerosCarnet[], int cantidadSocios, int numeroSocio)
{ // Uso el algoritmo de búsqueda secuencial
    for (int i = 0; i < cantidadSocios; i++)
    {
        if (numeroSocio == numerosCarnet[i])
            return i; // Devuelvo el índice en donde encontré el número de socio en este caso
    }

    return -1; // Como estandar se devuelve -1 si no enccuentra el elemento a buscar en el arreglo
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int CANTSOCIOS = 100;
    int numerosCarnet[CANTSOCIOS] = {504, 12, 1022, 5, 430};
    int numeroSocio = 0, encontrado = 0;

    cout << "Ingrese el número de socio a buscar..." << endl;
    cin >> numeroSocio;

    encontrado = esSocio(numerosCarnet, 5, numeroSocio);

    if (encontrado != -1)
    {
        cout << "Se encontro el número de socio con el número de lista: " << encontrado + 1;
    }
    else
    {
        cout << "No se encontro el número de socio en la lista";
    }

    return 0;
}
