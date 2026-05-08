#include <iostream>
using namespace std;

int main() {
    int num = 0;

    cout << "Ingrese un número entero\n";
    cin >> num;

    cout << "La quinta parte del número ingresado es: " << num / 5 << "\n";
    cout << "El resto de dividir " << num << " por 5: " << num % 5 << "\n";
    cout << "La séptima parte del resultado de hacer: " << "(" << num << " / 5), es: " << (num / 5) / 7 << "\n";

    return 0;
}