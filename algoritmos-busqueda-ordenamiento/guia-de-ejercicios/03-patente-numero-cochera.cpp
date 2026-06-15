#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
    Para este ejercicio se eligió el algoritmo PUP (Posición Única Predecible), ya que se cumplen sus tres condiciones: existe una equivalencia directa entre la clave (número de cochera) y la posición en el vector (posición = número de cochera - 1, según indica el enunciado), el rango de cocheras es conocido (del 1 al 20) y dicho rango está completo (no hay cocheras faltantes).
    Se descartaron la búsqueda binaria y la búsqueda secuencial porque ambos algoritmos están pensados para buscar un valor dentro del vector comparándolo con otros elementos (ya sea recorriendo uno por uno, o dividiendo el vector a la mitad). En este caso, el dato de entrada (el número de cochera) no es un valor a buscar dentro del vector, sino que permite calcular directamente la posición donde está la patente, haciendo innecesaria cualquier comparación o recorrido.
*/

string obtenerPatente(string listadoCocheras[], int numCocheraABuscar) {
    int pos = numCocheraABuscar - 1;
    return listadoCocheras[pos];
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int CANTCOCHERAS = 20;
    int numCocheraABuscar = 0;
    string patente = "";
    string patentesCocheras[CANTCOCHERAS] = {"AB 123 CD", "AC 456 EF", "AD 789 GH", "AE 234 IJ", "AF 567 KL", "AG 890 MN", "AH 135 OP", "AI 246 QR", "AJ 357 ST", "AK 468 UV", "AL 579 WX", "AM 680 YZ", "AN 791 AB", "AO 802 CD", "AP 913 EF", "AQ 024 GH", "AR 135 IJ", "AS 246 KL", "AT 357 MN", "AU 468 OP"};

    cout << "Ingrese el número de cochera" << endl;
    cin >> numCocheraABuscar;

    patente = obtenerPatente(patentesCocheras, numCocheraABuscar);

    cout << "Patente de la cochera " << numCocheraABuscar << ": " << patente;

    return 0;
}