
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[88];
    int search_number;
    int i;
    int found = 0;

    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    // Llenar el arreglo con números aleatorios
    for (i = 0; i < 88; i++) {
        array[i] = rand() % 100; // Números aleatorios entre 0 y 99
    }

    // Solicitar el número a buscar al usuario
    printf("Ingrese el número a buscar: ");
    scanf("%d", &search_number);

    // Buscar el número en el arreglo
    for (i = 0; i < 88; i++) {
        if (array[i] == search_number) {
            printf("Valor encontrado en la posición %d\n", i);
            found = 1;
            break;
        }
    }

    // Si el número no fue encontrado
    if (found == 0) {
        printf("Valor no encontrado\n");
    }

    return 0;
}


