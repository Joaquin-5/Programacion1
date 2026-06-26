#include <iostream>
using namespace std;

int calcularFactorial(int n)
{
    if (n == 0)
        return 1;
    else {
        return n * calcularFactorial(n - 1);
    }
}

void mostrarResultado(int numero, int resFact)
{
    cout << "El factorial de " << numero << ", es: " << resFact << endl;
}

int main()
{
    int factorial = 5;
    int resultFactorial = calcularFactorial(factorial);
    mostrarResultado(factorial, resultFactorial);

    return 0;
}