#include <iostream>
using namespace std;

void apareo(const int vecA[], int n, const int vecB[], int m, int vecC[], int &k)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (vecA[i] < vecB[j])
        {
            vecC[k] = vecA[i];
            i++;
        }
        else if (vecA[i] > vecB[j])
        {
            vecC[k] = vecB[j];
            j++;
        }
        else
        {
            vecC[k] = vecA[i];
            i++;
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

    while (j < m)
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
    int A[4] = {1, 3, 5, 7};
    int B[4] = {3, 4, 5, 8};

    const int MAX = 100;
    int k = 0;
    int C[MAX];

    apareo(A, 4, B, 4, C, k);
    mostrarVecApareado(C, k);

    return 0;
}