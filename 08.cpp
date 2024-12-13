//Angel Josue Rocha Adame
//24041225
#include <stdio.h>

// Función principal
int main() {
    int num1, num2, suma;

    // Capturar los dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Calcular la suma
    suma = num1 + num2;

    // Mostrar el resultado
    printf("La suma de %d y %d es %d\n", num1, num2, suma);

    return 0;
}
