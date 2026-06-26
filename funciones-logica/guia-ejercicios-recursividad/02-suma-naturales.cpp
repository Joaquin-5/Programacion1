#include <iostream>
#include <windows.h>
using namespace std;

void pedirNumero(int &numero)
{
    do
    {
        cout << "Ingrese un número entero mayor a cero: ";
        cin >> numero;
    } while (numero < 1);
}

int sumaNaturales(int n)
{
    if (n == 1)
        return n;

    return n + sumaNaturales(n - 1);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numero = 0;
    pedirNumero(numero);
    cout << sumaNaturales(numero);
    return 0;
}