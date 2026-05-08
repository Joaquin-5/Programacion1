#include <iostream>

int main()
{
    int ventas[3][4], option = 0;

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
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        std::cout << "Ventas producto " << i + 1 << ", día " << j + 1 << ": " std::cin >> ventas[i][j];
                    }
                }
                break;
            
            case 2:
                // Total de ventas por producto (se suman las filas)

            default:
                std::cout << "Opción inválida\n";
        }
    } while (option != 4);

    return 0;
}