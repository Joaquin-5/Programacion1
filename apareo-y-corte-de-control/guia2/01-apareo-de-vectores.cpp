#include <iostream>
using namespace std;

void apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (vecA[i] < vecB[j])
        {
            vecC[k] = vecA[i];
            i++;
        }
        else
        {
            vecC[k] = vecB[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        vecC[k] = vecA[i];
        i++;
        k++;
    }

    while (i < n)
    {
        vecC[k] = vecB[j];
        j++;
        k++;
    }
}

void mostrarVecApareado(int vec[], int cant)
{
    cout << "Vector resultado = {";
    for (int i = 0; i < cant; i++)
    {
        cout << vec[i];

        if (i < cant - 1)
            cout << ", ";
    }
    cout << "}";
}

int main()
{
    int vec1[6] = {12, 25, 38, 47, 59, 73};
    int vec2[9] = {8, 19, 25, 34, 47, 61, 73, 85, 96};

    const int MAX = 100;
    int vecRes[MAX];
    int k = 0;

    apareo(vec1, 6, vec2, 9, vecRes, k);
    mostrarVecApareado(vecRes, k);

    return 0;
}