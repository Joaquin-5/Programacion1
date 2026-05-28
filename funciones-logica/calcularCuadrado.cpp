#include <iostream>
using namespace std;

int calcularCuadrado(int numero)
{
    return numero * numero;
}

int main()
{
    int numero = 0, cuadrado = 0;

    cout << "Ingrese un número entero para calcular su cuadrado" << endl;
    cin >> numero;

    cuadrado = calcularCuadrado(numero);

    cout << "El cuadrado de " << numero << " es: " << cuadrado << endl;

    return 0;
}