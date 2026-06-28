#include <iostream>
using namespace std;

void pedirDatos(int dnis[], int tiposPases[], double pagos[])
{
    int reservas = 0;
    int DNI = -1;
    int tiposPase = 0;
    int jubilado = 0;
    do
    {
        cout << "Ingrese el número de DNI" << endl;
        cin >> DNI;
        dnis[reservas] = DNI;
        do
        {
            cout << "Ingrese el tipo de pase (1, 2 o 3)" << endl;
            cin << tiposPase;
        } while (tiposPase != 1 || tiposPase != 2 || tiposPase != 3);

        do
        {
            cout << "¿Es jubilado? (1 - Si, 2 - No)" << endl;
            cin >> jubilado;
        } while (jubilado != 1 || jubilado != 2);

        if (jubilado == 1)
        {
            switch (tiposPase)
            {
            case 1:
                pagos[reservas] = 2500 - (2500 * 0, 2);
                break;
            case 2:
                pagos[reservas] = 3000 - (3000 * 0, 2);
                break;
            case 3:
                pagos[reservas] = 3500 - (3500 * 0, 2);
                break;

            default:
                break;
            }
        }
        else
        {
            switch (tiposPase)
            {
            case 1:
                pagos[reservas] = 2500;
                break;
            case 2:
                pagos[reservas] = 3000;
                break;
            case 3:
                pagos[reservas] = 3500;
                break;

            default:
                break;
            }
        }

        reservas++;

    } while ((reservas < 100) || (DNI != 0));
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

void mostrarListado() {

}

int main()
{
    const int MAX = 100;
    int DNIs = [MAX];
    int tiposDePases = [MAX];
    double pagos[MAX];

    return 0;
}