#include <iostream>
using namespace std;

int main()
{
    int sizeArray = 0, numMayor = 0, numMenor = 0, posNumMayor = 0, posNumMenor = 0;
    cout << "Ingrese el tamaño del arreglo: " << endl;
    cin >> sizeArray;

    int array[sizeArray];

    for (int i = 0; i < sizeArray; i++)
    {
        cout << "Ingrese un número" << endl;
        cin >> array[i];
    }

    // Se asignan el primer número del arreglo como máximo y como mínimo para después ir comparando con el resto de los valores del arreglo
    numMayor = array[0];
    numMenor = array[0];

    for (int i = 0; i < sizeArray; i++)
    {
        // Se establece el número mayor del arreglo y en que posición está
        if (array[i] > numMayor)
        {
            numMayor = array[i];
            posNumMayor = i;
        }

        // Se establece el número menor del arreglo y en que posición está
        if (array[i] < numMenor)
        {
            numMenor = array[i];
            posNumMenor = i;
        }
    }

    cout << "El número mayor es: " << numMayor << " en la posición: " << posNumMayor << endl;
    cout << "El número menor es: " << numMenor << " en la posición: " << posNumMenor << endl;

    return 0;
}