#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void pedirCredencial(int &numCredencial)
{
    cout << "Ingrese su número de credencial" << endl;
    cin >> numCredencial;
}

bool buscarCasillero(string arr[], int credencial, string &nombre)
{
    if ((credencial < 100) || (credencial > 109))
        return false;
    int pos = credencial - 100;
    nombre = arr[pos];
    return true;
}

void mostrarResultado(bool encontrado, string nombrePersona)
{
    if (nombrePersona != "")
    {
        cout << nombrePersona;
    }
    else
    {
        cout << "No se encontró el número de credencial";
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int CANTPERSONAS = 10;
    string personasCasilleros[CANTPERSONAS] = {"Juan Pérez", "María González", "Lucas Fernández", "Sofía Martínez", "Nicolás López", "Camila Rodríguez", "Martín Díaz", "Valentina Torres", "Agustín Romero", "Julieta Herrera"};
    string nombrePersona = "";
    int numCredencialABuscar = 0;
    bool encontrado = false;

    pedirCredencial(numCredencialABuscar);

    encontrado = buscarCasillero(personasCasilleros, numCredencialABuscar, nombrePersona);

    if (buscarCasillero(personasCasilleros, numCredencialABuscar, nombrePersona))
    {
        mostrarResultado(nombrePersona);
    }
    else
    {
        cout << "No se encontró el número de credencial";
    }

    return 0;
}