#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Alumno
{
    string nombre;
    int legajo;
    float notaFinal;
};

void cargaCantidadAlumnos(int &cantidadAlumnos)
{
    do
    {
        cout << "Ingrese la cantidad de alumnos (1-100): ";
        cin >> cantidadAlumnos;
    } while (cantidadAlumnos < 1 || cantidadAlumnos > 100);
}

void cargarAlumnos(Alumno vec[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << "Ingrese el nombre del alumno " << i + 1 << endl;
        cin >> vec[i].nombre;

        cout << "Ingrese el número de legajo del alumno" << endl;
        cin >> vec[i].legajo;

        cout << "Ingrese la nota final del alumno (se admite decimales)" << endl;
        cin >> vec[i].notaFinal;
    }
}

void ordenamientoLegajo(Alumno vec[], int cant)
{
    Alumno key;
    int j;
    for (int i = 1; i < cant; i++)
    {
        key = vec[i];
        j = i - 1;

        while (j >= 0 && vec[j].legajo > key.legajo)
        {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}

int busquedaLegajo(Alumno vec[], int cant, int legajoABuscar)
{
    int inicio = 0;
    int fin = cant - 1;

    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;

        if (vec[mitad].legajo == legajoABuscar)
            return mitad;

        if (vec[mitad].legajo > legajoABuscar)
        {
            fin = mitad - 1;
        }
        else
        {
            inicio = mitad + 1;
        }
    }
    return -1;
}

void pedirLegajo(Alumno vec[], int cant)
{
    int legajoABuscar = 0;
    int pos = 0;

    for (int i = 0; i < cant; i++)
    {
        cout << vec[i].legajo << " - "
             << vec[i].nombre << " - "
             << vec[i].notaFinal << endl;
    }

    // Pido el legajo a buscar
    cout << "Ingrese el legajo a buscar" << endl;
    cin >> legajoABuscar;
    cout << "" << endl;

    pos = busquedaLegajo(vec, cant, legajoABuscar);

    // Muestro el nombre y la nota del alumno encontrado
    if (pos != -1)
    {
        cout << "Nombre del alumno: " << vec[pos].nombre << ", nota final: " << vec[pos].notaFinal << endl;
    }
    else
    {
        cout << "No se encontró el alumno con el número de legajo: " << legajoABuscar << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int MAX = 100;
    Alumno alumnos[MAX];
    int cantidadAlumnos = 0;

    cargaCantidadAlumnos(cantidadAlumnos);
    cargarAlumnos(alumnos, cantidadAlumnos);
    ordenamientoLegajo(alumnos, cantidadAlumnos);
    pedirLegajo(alumnos, cantidadAlumnos);

    return 0;
}