#include <stdio.h>

int main() {
    int numeros[] = {1, 3, 5, 7, 9, 11, 13, 15}; // Array de n�meros predefinidos
    int longitud = sizeof(numeros) / sizeof(numeros[0]); // Obtener la longitud del array
    int numeroBuscado;
    int encontrado = 0; // Bandera para indicar si se encuentra el n�mero
    char opcion;

    do {
        printf("Ingrese el n�mero que desea buscar: ");
        scanf("%d", &numeroBuscado);

        encontrado = 0; // Reiniciar la bandera antes de cada b�squeda

        // Buscar el n�mero en el array
        for (int i = 0; i < longitud; i++) {
            if (numeros[i] == numeroBuscado) {
                printf("El n�mero %d ha sido encontrado.\n", numeroBuscado);
                encontrado = 1; // Establecer la bandera en 1 para indicar que se encontr�
                break; // Salir del bucle for
            }
        }

        if (!encontrado) {
            printf("El n�mero %d no existe en el array.\n", numeroBuscado);
        }

        printf("Desea buscar otro n�mero? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
