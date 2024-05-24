
#include <stdio.h>
#define filas 3
#define columnas 3

int main() {
    int arreglo[filas][columnas];
    int i; 
    int k;
    int numero = 0;
    int numero_a_buscar;

    for (i = 0; i < filas; i++) {
        for (k = 0; k < columnas; k++) {
            arreglo[i][k] = numero++;
        }
    }

    printf("El arreglo es:\n");
    for (i = 0; i < filas; i++) {
        for (k = 0; k < columnas; k++) {
            printf("%d ", arreglo[i][k]);
        }
        printf("\n");
    }

    printf("Ingrese el número que vos vas a buscar: ");
    scanf("%d", &numero_a_buscar);

    for (i = 0; i < filas; i++) {
        for (k = 0; k < columnas; k++) {
            if (arreglo[i][k] == numero_a_buscar) {
                printf("El numero esta en la posicion(%d, %d)\n",i, k);
                return 0;
            }
        }
    }
    printf("No se encontró el número %d en el arreglo\n", numero_a_buscar);
    return 0;
}

