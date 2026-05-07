#include <string>
#include <iostream>

int main()
{
    std::string nombre = "", tipoPlan = "", tipoEstudio = "";
    int cantidadAfiliados = 0, edad = 0, cantPrioritario = 0, cantGeneral = 0;
    // Trabajo esta variable como double ya que puede llegar haber porcentajes decimales
    double porcentajeSectorPrioritario = 0.0;

    std::cout << "Ingrese la cantidad de afiliados: " << std::endl;
    std::cin >> cantidadAfiliados;

    for (int i = 0; i < cantidadAfiliados; i++)
    {
        std::cout << "Ingrese la edad del afiliado" << std::endl;
        std::cin >> edad;

        std::cout << "Ingrese el tipo de plan: 'B' para básico, 'P' para premium" << std::endl;
        std::cin >> tipoPlan;

        std::cout << "Ingrese el tipo de estudio: 'R' para radiología, 'L' para laboratorio" << std::endl;
        std::cin >> tipoEstudio;

        if (edad >= 65 || (edad < 18 && tipoPlan == "P"))
            cantPrioritario++;
        else
            cantGeneral++;
    }

    // Casteo cantProritario a double (decimal), sino una división que de resaultado deciamal, con dos variables enteras va a dar cero
    porcentajeSectorPrioritario = (double)cantPrioritario / cantidadAfiliados * 100;

    std::cout << "Cantidad de afiliados derivados al sector general: " << cantGeneral << std::endl;
    std::cout << "Cantidad de afiliados derivados al sector prioritario: " << cantPrioritario << std::endl;
    std::cout << "Porcentaje de afiliados en el sector prioritario: " << porcentajeSectorPrioritario << "%" << std::endl;

    return 0;
}