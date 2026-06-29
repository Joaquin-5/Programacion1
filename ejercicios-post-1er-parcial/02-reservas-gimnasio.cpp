#include <iostream>
#include <windows.h>
using namespace std;

void pedirDatos(int dnis[], int tiposPases[], double pagos[], int &cantidadDePersonas)
{
    int DNI = -1;
    int tiposPase = 0;
    int jubilado = 0;
    double precio = 0;
    do
    {
        cout << "Ingrese el número de DNI:" << endl;
        cin >> DNI;
        if (DNI != 0)
        {
            dnis[cantidadDePersonas] = DNI;
            do
            {
                cout << "Ingrese el tipo de pase: (1 - Musculación, 2 - Yoga o 3 - Crossfit)" << endl;
                cin >> tiposPase;
            } while (tiposPase != 1 && tiposPase != 2 && tiposPase != 3);
            cout << "Salí del do-while del tipo de pase" << endl;
            tiposPases[cantidadDePersonas] = tiposPase;

            do
            {
                cout << "¿Es jubilado? (1 - Si, 2 - No)" << endl;
                cin >> jubilado;
            } while (jubilado != 1 && jubilado != 2);

            switch (tiposPase)
            {
            case 1:
                precio = 2500;
                break;
            case 2:
                precio = 3000;
                break;
            case 3:
                precio = 3500;
                break;

            default:
                break;
            }

            if (jubilado == 1)
            {
                precio = precio - (precio * 0.2);
            }
            pagos[cantidadDePersonas] = precio;
            cantidadDePersonas++;
        }
    } while ((cantidadDePersonas < 100) && (DNI != 0));
}

double recaudoTotal(double vec[], int cant)
{
    double total = 0;
    for (int i = 0; i < cant; i++)
    {
        total += vec[i];
    }
    return total;
}

int cuantasPersonasYoga(int vec[], int cant)
{
    int cantYoga = 0;
    for (int i = 0; i < cant; i++)
    {
        if (vec[i] == 2)
        {
            cantYoga++;
        }
    }
    return cantYoga;
}

bool asistioHoy(int vec[], int cant, int DNI)
{
    for (int i = 0; i < cant; i++)
    {
        if (vec[i] == DNI)
        {
            return true;
        }
    }
    return false;
}

void mostrarListados(int dnis[], int tiposPase[], double pagos[], int cant)
{
    // Listado DNI's y cuánto pagó cada uno
    for (int i = 0; i < cant; i++)
    {
        cout << "Número DNI: " << dnis[i] << ", pagó: $" << pagos[i] << endl;
    }

    // Recaudo total
    cout << "Recaudo total: $" << recaudoTotal(pagos, cant) << endl;

    // Cantidad de personas que asistieron a yoga
    cout << "Cantidad de personas que asistieron a yoga: " << cuantasPersonasYoga(tiposPase, cant) << endl;

    // Busco si una persona asistió hoy al gimnasio a través de su número de DNI
    int DNI = 0;
    cout << "Ingrese un número de DNI para saber si asistió o no, el día de hoy" << endl;
    cin >> DNI;
    if (asistioHoy(dnis, cant, DNI))
    {
        cout << "¡Asistió hoy!" << endl;
    }
    else
    {
        cout << "No asistió hoy" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int MAX = 100;
    int DNIs[MAX];
    int tiposDePases[MAX];
    double pagos[MAX];
    int cantidadPersonas = 0;

    pedirDatos(DNIs, tiposDePases, pagos, cantidadPersonas);
    mostrarListados(DNIs, tiposDePases, pagos, cantidadPersonas);

    return 0;
}