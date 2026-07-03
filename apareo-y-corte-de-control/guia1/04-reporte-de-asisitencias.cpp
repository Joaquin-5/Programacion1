#include <iostream>
#include <windows.h>
using namespace std;

struct Asistencia
{
    int id_materia;
    bool presente;
};

void listarCantAlumnosPorMateria(Asistencia vec[], int n)
{
    int i = 0;
    int alumnosPresentes = 0;
    int key;

    while (i < n)
    {
        key = vec[i].id_materia;
        // Se reinicia el contador cuando cambia la key
        alumnosPresentes = 0;
        while (i < n && key == vec[i].id_materia)
        {
            if (vec[i].presente)
                alumnosPresentes++;
            i++;
        }
        cout << "ID materia: " << key << " presentes: " << alumnosPresentes << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Asistencia asistencias[10] = {{102, true}, {102, false}, {102, true}, {105, true}, {105, false}, {105, true}, {107, false}, {108, true}, {108, true}, {110, true}};

    listarCantAlumnosPorMateria(asistencias, 10);

    return 0;
}