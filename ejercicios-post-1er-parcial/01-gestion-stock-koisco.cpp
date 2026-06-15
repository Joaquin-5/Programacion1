#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
    Lotes de datos:
    códigos: {"PRD-001-AZ", "SKU-45872", "ITEM-2026-0001", "PROD-BSAS-789", "ART-XL-5562"}
    precios: {12.500, 8.999, 15.750, 23.400, 6.300}
    cantidad: {23, 10, 32, 5, 7}
*/

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    string codigoProductoMasCaro = "";
    string codigos[5];
    double precios[5];
    double totalInventario = 0;
    double precioMasAlto = 0;
    int cantidad[5];

    // Carga de los 5 productos
    for (int i = 0; i < 5; i++)
    {
        string codigo = ""; // se va a utilizar en cada iteración para los cinco productos
        cout << "Ingrese el código del producto " << i + 1 << ": " << endl;
        cin >> codigo;
        codigos[i] = codigo;

        double precio = 0;
        cout << "Ingrese el precio del producto " << i + 1 << ": " << endl;
        cin >> precio;
        precios[i] = precio;

        int stock = 0;
        cout << "Ingrese la cantidad (stock) del producto " << i + 1 << ": " << endl;
        cin >> stock;
        cantidad[i] = stock;
    }

    // Cálculo total de inventario
    for (int i = 0; i < 5; i++)
    {
        totalInventario += precios[i] * cantidad[i];
    }

    // Determino cuál es el producto más caro y almaceno el código
    codigoProductoMasCaro = codigos[0];
    precioMasAlto = precios[0];
    for (int i = 1; i < 5; i++)
    {
        if (precios[i] > precioMasAlto)
        {
            precioMasAlto = precios[i];
            codigoProductoMasCaro = codigos[i];
        }
    }

    // Se muestra el listado completo de productos, muestro el total de inventario y el código del producto más caro
    for (int i = 0; i < 5; i++)
    {
        cout << "Código del producto " << i + 1 << ": " << codigos[i] << endl;
        cout << "Precio del producto " << i + 1 << ": $" << precios[i] << endl;
        cout << "Cantidad (stock) del producto " << i + 1 << ": " << cantidad[i] << endl;
        cout << "Total de inventario: " << totalInventario << endl;
        cout << "Código del producto más caro: " << codigoProductoMasCaro << endl;
    }

    return 0;
}