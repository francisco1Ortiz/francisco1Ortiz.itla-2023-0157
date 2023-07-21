#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nAlumno[50] = "";
    char materia[50] = "";
    float p1 = 0.0;
    float p2 = 0.0;
    float p3 = 0.0;
    float promedio = 0.0;

    FILE *ar;
    ar = fopen("arc8.txt", "a");

    int opcion = 0;

    do
    {
        printf("\n\n--- Menú ---");
        printf("\n1. Agregar Alumno");
        printf("\n2. Leer archivo");
        printf("\n3. Salir");
        printf("\n\nSelecciona una opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\nIngresa Nombre del Alumno: ");
            scanf("%s", nAlumno);

            printf("\nIngresa Nombre de la Materia: ");
            scanf("%s", materia);

            printf("\nIngresa Valor del Parcial 1: ");
            scanf("%f", &p1);

            printf("\nIngresa Valor del Parcial 2: ");
            scanf("%f", &p2);

            printf("\nIngresa Valor del Parcial 3: ");
            scanf("%f", &p3);

            promedio = (p1 + p2 + p3) / 3.0;
            printf("|MATERIA|\t|ALUMNO|\t|P1|\t|P2|\t|P3|\t|PROMEDIO|");
            printf("\n%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f", materia, nAlumno, p1, p2, p3, promedio);

            fprintf(ar, "\n%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f", materia, nAlumno, p1, p2, p3, promedio);
            printf("\n\n--- Nuevo Alumno Agregado con Exito ---\n\n");
            break;

        case 2:
            fclose(ar);
            ar = fopen("arc8.txt", "r");
            if (ar == NULL)
            {
                printf("\nNo se pudo abrir el archivo.\n");
                break;
            }

            printf("\n       --- Contenido del Archivo ---\n");

            char c;
            while ((c = fgetc(ar)) != EOF)
            {
                printf("%c", c);
            }

            fclose(ar);
            ar = fopen("arc8.txt", "a");
            break;

        case 3:
            printf("\nSaliendo del programa...\n");
            break;

        default:
            printf("\nOpción inválida. Por favor, selecciona una opción válida.\n");
        }

    } while (opcion != 3);

    fclose(ar);

    return 0;
}
