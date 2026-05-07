#include <iostream>

int main()
{
    // Ejercicio 1: Calcular puntajes de un torneo
    int cantidadJugadores, puntaje, contadorMasDeMilPuntos = 0, contadorMenosDeQuinientos = 0, promedio = 0, puntajeMasAlto = 0, posicionPuntajeMasAlto = 0, puntajeMasBajo = 0;
    cantidadJugadores = 0;

    std::cout << "Ingrese la cantidad de jugadores" << std::endl;
    std::cin >> cantidadJugadores;

    for (int i = 1; i <= cantidadJugadores; i++)
    {
        puntaje = 0;
        std::cout << "Ingrese el puntaje del jugador " << i << std::endl;
        std::cin >> puntaje;

        // Una vez que se ingresa el primer puntaje se lo asigno a las dos variables puntajeMasAlto, puntajeMasBajo para despues compararlo con los próximos puntajes
        if (i == 1)
        {
            puntajeMasAlto = puntaje;
            puntajeMasBajo = puntaje;
        }

        // Determino el puntaje más alto y su respectiva posición
        if (puntaje > puntajeMasAlto)
        {
            puntajeMasAlto = puntaje;
            posicionPuntajeMasAlto = i;
        }

        // Determino el puntaje más bajo
        if (puntaje < puntajeMasBajo)
            puntajeMasBajo = puntaje;

        // Voy acumulando los puntajes en la variable promedio y al salir del bucle termino de calcularlo
        promedio += puntaje;

        // Determino la cantidad de jugadores que tienen más de 1000 puntos y menos de 500 puntos
        if (puntaje > 1000)
        {
            contadorMasDeMilPuntos++;
        }
        else if (puntaje < 500)
        {
            contadorMenosDeQuinientos++;
        }
    }

    // Termino de calcular el promedio una vez que sumé todos los puntajes para dividirlo por la cantidad de jugadores
    promedio = promedio / cantidadJugadores;

    std::cout << "Cantidad de jugadores con más de 1000 puntos: " << contadorMasDeMilPuntos << std::endl;
    std::cout << "Cantidad de jugadores con menos de 500 puntos: " << contadorMenosDeQuinientos << std::endl;
    std::cout << "Puntaje más alto: " << puntajeMasAlto << std::endl;
    std::cout << "Puntaje más bajo: " << puntajeMasBajo << std::endl;
    std::cout << "Posición del puntaje más alto " << posicionPuntajeMasAlto << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;

    return 0;
}
