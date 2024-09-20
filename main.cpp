#include <iostream>
#include <fstream> 
#include <vector>
#include "ordenar.h"

// Cargar los gastos base
void cargarGastosBase(const std::string& nombreArchivo, std::vector<Gasto>& gastos) {
    std::ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        std::string categoria;
        double monto;
        while (archivo >> categoria >> monto) {
            agregarGasto(gastos, categoria, monto);
        }
        archivo.close();
    }
}

int main() {
    std::vector<Gasto> gastos;
    int opcion;
    bool continuar = true;
    
    cargarGastosBase("gastos.txt", gastos);

    while (continuar) {
        std::cout << "1. Agregar gasto\n";
        std::cout << "2. Mostrar gastos ordenados\n";
        std::cout << "3. Mostrar total de gastos\n";
        std::cout << "4. Salir\n";
        std::cout << "Selecciona una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string categoria;
                double monto;
                std::cout << "Introduce la categoría del gasto: ";
                std::cin.ignore();  // Liberar memoria (buffer)
                std::getline(std::cin, categoria);
                std::cout << "Introduce el monto del gasto: $";
                std::cin >> monto;
                agregarGasto(gastos, categoria, monto);
                break;
            }
            case 2:
                ordenarGastosPorMonto(gastos);
                mostrarGastos(gastos);
                break;
            case 3: {
                double total = calcularTotalGastos(gastos);
                std::cout << "El total de tus gastos mensuales es: $" << total << std::endl;
                break;
            }
            case 4:
                continuar = false;
                break;
            default:
                std::cout << "Opción no válida, por favor intenta de nuevo.\n";
                break;
        }
    }

    return 0;
}
