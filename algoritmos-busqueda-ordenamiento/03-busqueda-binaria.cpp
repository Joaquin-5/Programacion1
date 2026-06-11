#include <iostream>
using namespace std;

int busquedaBinaria(const int arr[])

int main()
{
    const int codigosProductos[10] = [1015, 2022, 3045, 4001, 5012, 6120, 7235, 8100, 9312, 9999];
    int c

    cout << "Ingrese el código a buscar" << endl;
    cin >> 

    return 0;
}

// Resolución
/* #include <iostream>
using namespace std;
int busquedaBinaria(int arr[], int n, int x){
    int inicio = 0, fin = n - 1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (arr[medio] == x) { 
            return medio; 
        }
        
        if (arr[medio] < x) { 
            inicio = medio + 1; 
        }
        else {
            fin = medio - 1; 
        }
    }
    return -1; 
}
int main(){
    const int n = 10;
    int codProducto[n] = {1015, 2022, 3045, 4001, 5012, 6120, 7235, 8100, 9312, 9999};
    int valor;
    cout << "Ingrese el codigo de producto a buscar: ";
    cin >> valor;
    int resultado = busquedaBinaria(codProducto, n, valor);
    if (resultado != -1) {
        cout << "es el " << resultado + 1 << " producto." << endl;
    } else {
        cout << "el producto no fue encontrado" << endl;
    }
    return 0;
} */