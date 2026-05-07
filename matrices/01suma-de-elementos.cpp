#include <iostream>
using namespace std;

int main()
{
    int numArray[5];
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            cout << "Ingrese un número" << endl;
            cin >> numArray[i];
        }
        else
        {
            cout << "Ingrese otro número" << endl;
            cin >> numArray[i];
        }
    }

    return 0;
}