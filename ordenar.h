#pragma once
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

class Gasto {
private:
    std::string categoria;
    double monto;

public:
    Gasto(std::string& categoria, double monto)
        : categoria(categoria), monto(monto) {}

    // Getters
    std::string getCategoria() {
        return categoria;
    }

    double getMonto() {
        return monto;
    }

    // Métodos
    void mostrarGasto() {
        std::cout << "Categoría: " << categoria << " | Monto: $" << monto << std::endl;
    }
};

// Función para agregar un nuevo gasto
void agregarGasto(std::vector<Gasto>& gastos, std::string& categoria, double monto) {
    Gasto nuevoGasto(categoria, monto);
    gastos.push_back(nuevoGasto);
}

// Función para ordenar los gastos de mayor a menor
void ordenarGastosPorMonto(std::vector<Gasto>& gastos) {
    std::sort(gastos.begin(), gastos.end(), [](Gasto& a, Gasto& b) {
        return a.getMonto() > b.getMonto();
    });
}

// Función para mostrar los gastos de forma ordenados
void mostrarGastos(std::vector<Gasto>& gastos) {
    for (auto& gasto : gastos) {
        gasto.mostrarGasto();
    }
}

// Función para calcular el total de todos los gastos
double calcularTotalGastos(std::vector<Gasto>& gastos) {
    double total = 0;
    for (auto& gasto : gastos) {
        total += gasto.getMonto();
    }
    return total;
}
