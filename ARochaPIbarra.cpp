#include <iostream>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para inicializar la semilla aleatoria
using namespace std;

// Función para capturar y validar la cantidad de números
int FnCaptura() {
    int cantidad;
    do {
        cout << "Ingrese la cantidad de números (entre 2 y 40): ";
        cin >> cantidad;
        if (cantidad < 2 || cantidad > 40) {
            cout << "Error: la cantidad debe estar entre 2 y 40.\n";
        }
    } while (cantidad < 2 || cantidad > 40);
    return cantidad;
}

// Función para generar números únicos aleatorios
void FnGenerarNumeros(int numeros[], int cantidad) {
    srand(time(0)); // Inicializar semilla para números aleatorios
    int contador = 0;

    while (contador < cantidad) {
        int nuevoNumero = rand() % 100 + 1; // Genera números entre 1 y 100
        bool repetido = false;

        // Verificar si el número ya está en el arreglo
        for (int i = 0; i < contador; i++) {
            if (numeros[i] == nuevoNumero) {
                repetido = true;
                break;
            }
        }

        // Si el número no está repetido, agregarlo al arreglo
        if (!repetido) {
            numeros[contador] = nuevoNumero;
            contador++;
        }
    }
}

// Función para imprimir los números en parejas
void FnImprimirPares(int numeros[], int cantidad) {
    cout << "Parejas:\n";
    for (int i = 0; i < cantidad; i += 2) {
        cout << "[";
        cout << numeros[i];
        if (i + 1 < cantidad) {
            cout << ", " << numeros[i + 1];
        } else {
            cout << ", _"; // Caso impar: último número queda solo
        }
        cout << "] ";
    }
    cout << endl;
}

// Función principal
int main() {
    int cantidad;        // Cantidad de números a generar
    int numeros[40];     // Arreglo para almacenar los números únicos

    // Llamadas a las funciones
    cantidad = FnCaptura();
    FnGenerarNumeros(numeros, cantidad);
    FnImprimirPares(numeros, cantidad);

    return 0;
}
