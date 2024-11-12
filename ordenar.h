#pragma once
#include <iostream>
#include <algorithm>
#include <string>

class Nodo {
public:
    std::string categoria;
    double monto;
    Nodo* siguiente;

    Nodo(const std::string& cat, double m) : categoria(cat), monto(m), siguiente(nullptr) {}
};

// Función de comparación para ordenar los nodos por monto (Ayuda con IA)
bool compararMontos(Nodo* a, Nodo* b) {
    return a->monto < b->monto; // Orden ascendente por monto
}

class ListaLigada {
private:
    Nodo* cabeza;

public:
    ListaLigada() : cabeza(nullptr) {}

    // Agregar un nuevo gasto a la lista
    void agregarGasto(const std::string& categoria, double monto) {
        Nodo* nuevoNodo = new Nodo(categoria, monto);
        if (!cabeza) {
            cabeza = nuevoNodo;
        } else {
            Nodo* temp = cabeza;
            while (temp->siguiente) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevoNodo;
        }
    }

    // Método para acceder a la cabeza de la lista
    Nodo* obtenerCabeza() const {
        return cabeza;
    }

    // Mostrar los gastos en la lista
    void mostrarGastos() {
        Nodo* temp = cabeza;
        while (temp) { // No sea nullptr
            std::cout << temp->categoria << ": $" << temp->monto << std::endl;
            temp = temp->siguiente;
        }
        std::cout << std::endl;
    }

    // Ordenar los gastos usando std::sort con una función de comparación (Algunas partes se corrigieron con IA)
    void ordenarGastos() {
        if (!cabeza) return;

        // Crear un arreglo para almacenar los nodos
        Nodo* temp = cabeza;
        Nodo** nodos = nullptr;
        int count = 0;

        // Contar nodos
        while (temp) { // No sea nullptr
            count++;
            temp = temp->siguiente;
        }

        // Crear un arreglo dinámico de nodos
        nodos = new Nodo*[count];
        temp = cabeza;
        for (int i = 0; i < count; i++) {
            nodos[i] = temp;
            temp = temp->siguiente;
        }

        // Ordenar el arreglo de nodos por monto usando la función compararMontos (ayuda de IA)
        std::sort(nodos, nodos + count, compararMontos);

        // Reconstruir la lista a partir del arreglo ordenado
        cabeza = nodos[0];
        for (int i = 0; i < count - 1; i++) {
            nodos[i]->siguiente = nodos[i + 1];
        }
        nodos[count - 1]->siguiente = nullptr;

        // Liberar memoria del arreglo
        delete[] nodos;
    }

    // Calcular el total de los gastos
    double calcularTotal() {
        double total = 0;
        Nodo* temp = cabeza;
        while (temp) { // No sea nullptr
            total += temp->monto;
            temp = temp->siguiente;
        }
        return total;
    }
};
