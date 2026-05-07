#include <iostream>
using namespace std;

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese el número de la fila: " << i + 1 << " y columna: " << j + 1 << endl;
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "La diagonal principal es: " << matriz[i][i] << endl;
    }

    return 0;
}