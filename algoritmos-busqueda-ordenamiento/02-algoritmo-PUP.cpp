#include <iostream>
using namespace std;

int main()
{
    int credencial;
    string empleados[10] = {"maria", "juan", "pedro", "luis", "ana", "carlos", "sofia", "diego", "laura", "jose"};

    cout << "Ingrese el numero de credencial a buscar: ";
    cin >> credencial;

    string nombre = "No se encontro la credencial";

    if (credencial >= 100 && credencial < 110)
    {
        nombre = empleados[credencial - 100];
        cout << "El nombre asociado a la credencial " << credencial << " es: " << nombre << endl;
    }
    else
    {
        cout << nombre << endl;
    }

    return 0;
}
