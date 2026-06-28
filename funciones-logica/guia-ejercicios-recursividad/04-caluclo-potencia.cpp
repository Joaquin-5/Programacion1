#include <iostream>
using namespace std;

int calcularPotencia(int base, int exponetente)
{
    if (exponetente == 0)
        return 1;
    return base * calcularPotencia(base, exponetente - 1);
}

void mostrarResultado(int base, int exponente, int res) {
    cout << base << " elevado a la " << exponente << " da como resultado: " << res;
}

int main()
{
    int base = 45;
    int exponente = 3;
    int res = calcularPotencia(base, exponente);
    mostrarResultado(base, exponente, res);

    return 0;
}