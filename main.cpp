#include <iostream>
#include <fstream>
#include "ordenar.h"

void cargarGastosBase(const std::string& nombreArchivo, ListaLigada& lista) {
    std::ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        std::string categoria;
        double monto;
        while (archivo >> categoria >> monto) {
            lista.agregarGasto(categoria, monto);
        }
        archivo.close();
    }
}

int main() {
    ListaLigada listaGastos;
    int opcion;
    bool continuar = true;

    cargarGastosBase("gastos.txt", listaGastos);

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
                listaGastos.agregarGasto(categoria, monto);
                break;
            }
            case 2:
                listaGastos.ordenarGastos();
                listaGastos.mostrarGastos();
                break;
            case 3: {
                double total = listaGastos.calcularTotal();
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
