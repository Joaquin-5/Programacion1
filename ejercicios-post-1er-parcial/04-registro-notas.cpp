#include <iostream>
#include <windows.h>
using namespace std;

const int ALUMNOS = 3;
const int CUATRIMESTRES = 2;

void cargarNotas(float vec[][CUATRIMESTRES])
{
    for (int i = 0; i < ALUMNOS; i++)
    {
        for (int j = 0; j < CUATRIMESTRES; j++)
        {
            cout << "Ingrese la nota del alumno " << i + 1 << " del cuatrimestre " << j + 1 << endl;
            cin >> vec[i][j];
        }
    }
}

float promedioFinal(float vec[][CUATRIMESTRES], int alumno)
{
    float promedio = 0;
    float sumaNotas = 0;
    for (int j = 0; j < CUATRIMESTRES; j++)
    {
        sumaNotas += vec[alumno][j];
    }
    promedio = sumaNotas / CUATRIMESTRES;
    return promedio;
}

void mostrarResultados(float vec[][CUATRIMESTRES], int alumnos)
{
    int promocionados = 0;
    float promedio = 0;
    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < CUATRIMESTRES; j++)
        {
            cout << "Alumno " << i + 1 << ", nota cuatrimestre " << j + 1 << ": " << vec[i][j] << endl;
        }

        // Calculo el promedio del alumno
        promedio = promedioFinal(vec, i);
        cout << "Promedio del alumno " << i + 1 << ": " << promedio << endl;

        // Voy calculando la cantidad de promocionados
        if (promedio >= 7)
            promocionados++;
    }
    // Cantidad de alumnos promocionados
    cout << "Cantidad de alumnos promocionados: " << promocionados << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float notas[ALUMNOS][CUATRIMESTRES];

    cargarNotas(notas);
    mostrarResultados(notas, ALUMNOS);
    return 0;
}