#include <iostream>
using namespace std;

int mayorDeTres(int n1, int n2, int n3)
{
    int mayor = n1;

    if (n2 > mayor)
    {
        mayor = n2;
    }

    if (n3 > mayor)
    {
        mayor = n3;
    }

    return mayor;
}

int main()
{
    int n1 = 0, n2 = 0, n3 = 0, numMayor = 0;

    cout << "Ingrese el número 1" << endl;
    cin >> n1;
    cout << "Ingrese el número 2" << endl;
    cin >> n2;
    cout << "Ingrese el número 3" << endl;
    cin >> n3;

    numMayor = mayorDeTres(n1, n2, n3);

    cout << "El mayor de los tres números ingresados es: " << numMayor << endl;

    return 0;
}