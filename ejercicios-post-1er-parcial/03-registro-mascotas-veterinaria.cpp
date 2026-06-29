#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

struct Mascota
{
    string nombre;
    int edad;
    float peso;
};

void cargaDeMascotas(Mascota vec[])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el nombre de la mascota" << endl;
        cin >> vec[i].nombre;

        cout << "Ingrese la edad de la mascota" << endl;
        cin >> vec[i].edad;

        cout << "Ingrese el peso de la mascota en kg" << endl;
        cin >> vec[i].peso;
    }
}

float calcularPromedioPeso(Mascota vec[])
{
    float pesoToal = 0;
    float promedio = 0;
    for (int i = 0; i < 4; i++)
    {
        pesoToal += vec[i].peso;
    }
    promedio = pesoToal / 4;
    return promedio;
}

string mascotaJoven(Mascota vec[])
{
    int mascotaJoven = vec[0].edad;
    string nombreMascotaJoven = "";
    for (int i = 1; i < 4; i++)
    {
        if (vec[i].edad < mascotaJoven)
            nombreMascotaJoven = vec[i].nombre;
    }
    return nombreMascotaJoven;
}

void mostrarResultados(Mascota vec[])
{
    // Listado completo de mascotas registradas
    for (int i = 0; i < 4; i++)
    {
        cout << "Nombre de la mascota: " << vec[i].nombre << endl;
        cout << "Edad de la mascota: " << vec[i].edad << endl;
        cout << "Peso de la mascota: " << vec[i].peso << "kg" << endl;
        cout << "--------------------" << endl;
    }

    // Promedio de peso de todas las mascotas
    cout << "Promedio del peso de las mascotas registradas: " << calcularPromedioPeso(vec) << endl;

    // Nombre de la mascota más joven
    cout << "Nombre de la mascota más joven: " << mascotaJoven(vec);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int MAX = 100;
    Mascota mascotas[MAX];

    cargaDeMascotas(mascotas);
    mostrarResultados(mascotas);
    return 0;
}