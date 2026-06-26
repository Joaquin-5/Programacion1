#include <iostream>
using namespace std;

void cuentaRegresiva(int n) {
    if (n < 0) return;

    cout << n << " ";

    cuentaRegresiva(n - 1);
}

int main() {
    cuentaRegresiva(5);
    return 0;
}