#include <iostream>
using namespace std;

int main() {
    // Ejercicio 1: Valores enteros
    /* int a, b;
    a = 5;
    b = 7;
    std::cout << a + b << endl;
    std::cout << a - b << endl;
    std::cout << a * b << endl; */

    // Ejercicio 2: Convertir de metros a centímetros
    /*
    // Declaro las variables sin ningún valor, que se van ir asignando durante la ejecución del programa. Elijo el tipo float ya que la cantidad puede ser decimal.
    float cantidadMetros, cantidadACentimetros;

    // Se le pide al usuario que ingrese un número, que puede ser tanto entero como decimal
    cout << "Ingrese la cantidad de metros para poder ser convertida centímetros. En caso de ser con coma, poner un punto (ej: 1.5)" << endl;
    cin >> cantidadMetros;

    // Se realiza la conversión multiplicando la cantidad en metros por 100, que es el factor conversión, para poder pasar de metros a centímetros
    cantidadACentimetros = cantidadMetros * 100;

    // Salida del resultado de la conversión
    cout << "La cantidad: " << cantidadMetros << "m, pasada a centímetros es: " << cantidadACentimetros << "cm"; */

    // Ejercicio 3:  Ingresar tres números y calcular el promedio
    /*float a, b, c, promedio;
    
    cout << "Ingrese el primer número que puede ser con coma, en ese caso ingresar un punto" << endl;
    cin >> a;

    cout << "Ingrese el segundo número que puede ser con coma, en ese caso ingresar un punto" << endl;
    cin >> b;

    cout << "Ingrese el tercer número que puede ser con coma, en ese caso ingresar un punto" << endl;
    cin >> c;

    // Calculo el promedio 
    promedio = (a + b + c) / 3;

    cout << "El promedio de los tres número ingresados es " << promedio; */

    // Ejercicio 4:Ingresar la cantidad de horas trabajadas y el valor por hora, calcular el sueldo total.
    /*int horasTrabajadas;
    double valorXHora, sueldoTotal;

    cout << "Ingrese la cantidad de horas trabajadas" << endl;
    cin >> horasTrabajadas;

    cout << "Ingrese el valor por hora" << endl;
    cin >> valorXHora;

    sueldoTotal = horasTrabajadas * valorXHora;

    cout << "El sueldo toal es de: $" << sueldoTotal; */

    // Ejercicio 5: Ingresar un número entero y mostrar su último dígito y el resto del número sin ese dígito
    /* int num;
    float ultimoDigito, restoDelNumero;

    cout << "Ingrese un número entero" << endl;
    cin >> num;

    // Usar el operador módulo dividio 10 me permite obtener el último dígito del número ingresado
    ultimoDigito = num % 10;

    // Divido por diez para obtener el número sin el dígito decimal
    restoDelNumero = num / 10;

    cout << "El último dígito del número es: " << ultimoDigito << endl;
    cout << "El resto del número es: " << restoDelNumero << endl; */

    // Ejercicio 6: Ingresar un número entero de dos cifras y mostrar por separado sus dígitos.
    /* int numero, primerDigito, segundoDigito;
    

    cout << "Ingresar un número entero de dos cifras" << endl;
    cin >> numero;

    primerDigito = numero / 10;
    segundoDigito = numero % 10;

    cout << "Primer dígito del número: " << primerDigito << endl;
    cout << "Segundo dígito del número: " << segundoDigito << endl; */

    // Ejercicio 7: Ingresar un número entero de tres cifras y mostrar la suma de sus dígitos
    /*int numero, primerDigito, segundoDigito, tercerDigito, suma;

    cout << "Ingrese un número de tres cifras" << endl;
    cin >> numero;

    primerDigito = numero / 100;
    segundoDigito = (numero / 10) % 10;
    tercerDigito = numero % 10;

    suma = primerDigito + segundoDigito + tercerDigito;

    cout << "La suma de los tres dígitos es: " << suma << endl; */

    // Ejercicio 8: Ingresar una cantidad de segundos e informar a cuántos minutos y segundos equivale.
    int segundos, minutos, restoSegundos;

    cout << "Ingrese la cantidad de segundos (ej: 478)" << endl;
    cin >> segundos;
    
    minutos = segundos / 60;
    restoSegundos = segundos % 60;
    cout << "Minutos: " << minutos << endl << "Segundos: " << restoSegundos;
    
    return 0;
}