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

    printf("\nIngresa Nombre Alumno: ");
    gets(nAlumno);
    // scanf("%s",&nAlumno);

    printf("\nIngresa Nombre Materia: ");
    scanf("%s", &materia);

    printf("\nIngresa Valor Parcial 1: ");
    scanf("%f", &p1);

    printf("\nIngresa Valor Parcial 2: ");
    scanf("%f", &p2);

    printf("\nIngresa Valor Parcial 3: ");
    scanf("%f", &p3);

    promedio = (p1 + p2 + p3) / 3.0;
    printf("|MATERIA|\t|ALUMNO|\t|P1|\t|P2|\t|P3|\t|PROMEDIO|");
    printf("\n%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f", materia, nAlumno, p1, p2, p3, promedio);

    fprintf(ar, "\n%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f", materia, nAlumno, p1, p2, p3, promedio);
    return 0;
}
