#include <stdio.h>

int main() {
    int numeros[] = {1, 3, 5, 7, 9, 11, 13, 15}; // Array de números predefinidos
    int longitud = sizeof(numeros) / sizeof(numeros[0]); // Obtener la longitud del array
    int numeroBuscado;
    int encontrado = 0; // Bandera para indicar si se encuentra el número
    char opcion;

    do {
        printf("Ingrese el número que desea buscar: ");
        scanf("%d", &numeroBuscado);

        encontrado = 0; // Reiniciar la bandera antes de cada búsqueda

        // Buscar el número en el array
        for (int i = 0; i < longitud; i++) {
            if (numeros[i] == numeroBuscado) {
                printf("El número %d ha sido encontrado.\n", numeroBuscado);
                encontrado = 1; // Establecer la bandera en 1 para indicar que se encontró
                break; // Salir del bucle for
            }
        }

        if (!encontrado) {
            printf("El número %d no existe en el array.\n", numeroBuscado);
        }

        printf("Desea buscar otro número? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
