#include <iostream>
using namespace std;

void apareo(const int vec1[], int cant1, const int vec2[], int cant2, int res[], int &cantRes)
{
    int i = 0;
    int j = 0;

    while (i < cant1 && j < cant2)
    {
        if (vec1[i] < vec2[j])
        {
            res[cantRes] = vec1[i];
            i++;
        }
        else 
        {
            res[cantRes] = vec2[j];
            j++;
        }
        cantRes++;
    }

    while (i < cant1)
    {
        res[cantRes] = vec1[i];
        i++;
        cantRes++;
    }

    while (j < cant2)
    {
        res[cantRes] = vec2[j];
        j++;
        cantRes++;
    }
}

void mostrarResultados(int vec[], int cant)
{
    cout << "Vector apareado:" << endl;
    for (int i = 0; i < cant; i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    const int MAX = 100;

    int cantRes = 0;
    int productosDeposito1[MAX] = {112, 245, 378, 512, 689};
    int productosDeposito2[MAX] = {135, 267, 356, 401, 578, 730, 812};
    int productosResultante[MAX];

    apareo(productosDeposito1, 5, productosDeposito2, 7, productosResultante, cantRes);
    mostrarResultados(productosResultante, cantRes);

    return 0;
}