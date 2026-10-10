#include <iostream>
#include <windows.h>
using namespace std;

void cargaDeDatos(float temperaturas[], float humedades[], int limite, int &i_temp, int &i_hum)
{
    string dato = "";
    int cantDatos = 0;

    do
    {
        cout << "Ingrese la cantidad maxima de datos a cargar (menor a " << limite << "):" << endl;
        cin >> cantDatos;
    } while (cantDatos > limite);

    do
    {
        cout << "Ingrese T para temperatura y H para humedad o 'F' para finalizar: " << endl;
        cin >> dato;
        if (dato == "T" || dato == "t")
        {
            if (i_temp < limite)
            {
                cout << "Ingrese el valor de temperatura [" << i_temp << "]: ";
                cin >> temperaturas[i_temp];
                i_temp++;
            }
        }
        else if (dato == "H" || dato == "h")
        {
            if (i_hum < limite)
            {
                cout << "Ingrese el valor de humedad [" << i_hum << "]: ";
                cin >> humedades[i_hum];
                i_hum++;
            }
        }
        // Condición para cuando deciden salir (no hace nada, solo evita caer en el 'else')
        else if (dato == "F" || dato == "f")
        {
            cout << "Finalizando la carga de datos..." << endl;
        }
        // SI INGRESA CUALQUIER OTRA COSA (otra letra, símbolo o número):
        else
        {
            cout << "[Error] Opcion no valida. Por favor, intente de nuevo." << endl;
            // No incrementamos ningún índice, simplemente el bucle se repite
        }
    } while (dato != "F" && dato != "f");
}

float calcularPromedioHumedades(float humedades[], int cantHumedades, float promedio)
{
    if (cantHumedades == 0)
        return 0;

    float sumaHumedades = 0;
    for (int i = 0; i < cantHumedades; i++)
    {
        sumaHumedades += humedades[i];
    }
    promedio = sumaHumedades / cantHumedades;
    return promedio;
}

void mostrarDatos(float temperaturas[], int cantTemperaturas, float promedioHumedad)
{
    float tempMenor = temperaturas[0], tempMayor = temperaturas[0];

    for (int i = 1; i < cantTemperaturas; i++)
    {
        if (temperaturas[i] < tempMenor)
        {
            tempMenor = temperaturas[i];
        }

        if (temperaturas[i] > tempMayor)
        {
            tempMayor = temperaturas[i];
        }
    }

    cout << "La temperatura menor es: " << tempMenor << ". La temperatura mayor es: " << tempMayor << ". El promedio de las humedades es: " << promedioHumedad;
}

int main()
{
    const int TAMANIO = 50;
    float temperaturas[TAMANIO] = {0}, humedades[TAMANIO] = {0}, promedioHumedades = 0;
    int i_temp = 0, i_hum = 0;

    cargaDeDatos(temperaturas, humedades, TAMANIO, i_temp, i_hum);
    promedioHumedades = calcularPromedioHumedades(humedades, i_hum, promedioHumedades);
    mostrarDatos(temperaturas, i_temp, promedioHumedades);

    return 0;
}