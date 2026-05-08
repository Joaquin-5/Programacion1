#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "spanish");
    const int PRODUCTOS = 3;
    const int DIAS = 4;
    int ventas[PRODUCTOS][DIAS], option = 0;

    do
    {
        std::cout << "\n--- MENÚ DE VENTAS ---\n";
        std::cout << "1. Cargar ventas\n";
        std::cout << "2. Total de ventas por producto\n";
        std::cout << "3. Día con más ventas\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: \n";
        std::cin >> option;

        switch (option)
        {
        case 1:
            // Se cargan las ventas
            for (int i = 0; i < PRODUCTOS; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    std::cout << "Ventas producto " << i + 1 << ", día " << j + 1 << ": ";
                    std::cin >> ventas[i][j];
                }
            }
            break;

        case 2:
            // Total de ventas por producto (se suman las filas)
            for (int i = 0; i < PRODUCTOS; i++)
            {
                int totalProd = 0;
                for (int j = 0; j < DIAS; j++)
                {
                    totalProd += ventas[i][j];
                }
                std::cout << "Total producto" << i + 1 << ": " << totalProd << std::endl;
            }
            break;

        case 3:
        { // Día con más ventas (se suman las columnas)
            int maxVentas = -1;
            int diaMax = -1;

            for (int j = 0; j < DIAS; j++)
            {
                int sumaDia = 0;
                for (int i = 0; i < PRODUCTOS; i++)
                {
                    sumaDia += ventas[i][j];
                }
                if (sumaDia > maxVentas)
                {
                    maxVentas = sumaDia;
                    diaMax = j + 1;
                }
            }
            std::cout << "El día con más ventas fue el día: " << diaMax << std::endl;
            break;
        }

        case 4:
            std::cout << "Saliendo del sistema..." << std::endl;
            break;

        default:
            std::cout << "Opción inválida.\n";
        }
    } while (option != 4);

    return 0;
}