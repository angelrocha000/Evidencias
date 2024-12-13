#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int trayecto1, trayecto2, min1, min2;
    int horas1, horas2, totalHoras, totalMinutos;

    cout << "Dame la cantidad de horas del trayecto 1: ";
    cin >> trayecto1;
    cout << "Dame la cantidad de minutos del trayecto 1: ";
    cin >> min1;

    cout << "Dame la cantidad de horas del trayecto 2: ";
    cin >> trayecto2;
    cout << "Dame la cantidad de minutos del trayecto 2: ";
    cin >> min2;

    // Convertimos las horas y minutos a un formato común para sumar
    horas1 = trayecto1 + min1 / 60;
    min1 = min1 % 60; // Minutos restantes del trayecto 1

    horas2 = trayecto2 + min2 / 60;
    min2 = min2 % 60; // Minutos restantes del trayecto 2

    // Sumamos las horas y minutos totales
    totalHoras = horas1 + horas2;
    totalMinutos = min1 + min2;

    // Si los minutos superan 59, convertimos a horas adicionales
    if (totalMinutos >= 60) {
        totalHoras += totalMinutos / 60;
        totalMinutos = totalMinutos % 60;
    }

    cout << "El total de horas del trayecto 1 es: " << horas1 << ":" << min1 << "\n";
    cout << "El total de horas del trayecto 2 es: " << horas2 << ":" << min2 << "\n";
    cout << "El total de horas y minutos de los dos trayectos es de: " << totalHoras << ":" << totalMinutos << "\n";

    return 0;
}
