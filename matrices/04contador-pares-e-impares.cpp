#include <iostream>
using namespace std;

int main()
{
    int matriz[4][2], cantNumPares = 0, cantNumImpares = 0, totalMatriz = 0;

    // Solicita los datos de la matriz al usuario
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingrese el número de la fila: " << i + 1 << " y columna: " << j + 1 << endl;
            cin >> matriz[i][j];

            // Voy sumando todos los números de la matriz en cada iteración
            totalMatriz += matriz[i][j];

            // Determino si el número ingresado en esa iteración es par o impar
            if (matriz[i][j] % 2 == 0)
            {
                cantNumPares++;
            }
            else
            {
                cantNumImpares++;
            }
        }
    }

    // Muestro la matriz por consola
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Muestro por consola la suma total de todos los números de la matriz
    cout << "La suma total de todos los números de la matriz es: " << totalMatriz << endl;

    // Determino si la suma total de todos los números de la matriz es par o impar y lo muestro por consola
    switch (totalMatriz % 2)
    {
        case 0:
            cout << "La suma total de todos los números de la matriz de 4 x 2 es par" << endl;
            break;

        case 1:
        case -1:
            cout << "La suma total de todos los números de la matriz de 4 x 2 es impar" << endl;
            break;
    }

    return 0;
}