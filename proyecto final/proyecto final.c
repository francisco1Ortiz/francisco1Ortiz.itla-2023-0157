#include <stdio.h>

int main()
{
    int nivel = 1;

    printf("Nivel 1: �Cu�l es tu s�ntoma principal?\n");
    printf("   1. S�ntomas respiratorios\n");
    printf("   2. S�ntomas digestivos\n");

    int opcion;
    scanf("%d", &opcion);

    if (opcion == 1)
    { // S�ntomas respiratorios
        printf("Nivel 2: �Tienes fiebre?\n");
        printf("   1. S�\n");
        printf("   2. No\n");

        int opcion2;
        scanf("%d", &opcion2);

        if (opcion2 == 1)
        { // Fiebre
            printf("Nivel 3: �Alta o baja?\n");
            printf("   1. baja\n");
            printf("   2. alta\n");


            int opcion3;
            scanf("%d", &opcion3);

            if (opcion3 == 1)
            { // Fiebre
                printf("Nivel 4: �tomo algo?\n");
                printf("   1. si\n");
                printf("   2. No\n");

                int opcion3;
                scanf("%d", &opcion3);

                if (opcion3 == 1)
                { // Esta congestionado
                    printf("Nivel 5: �hace frio en el lugar que te encuentras?\n");
                    printf("   1. S�\n");
                    printf("   2. No\n");

                    int opcion3;
                    scanf("%d", &opcion3);

                    if (opcion3 == 1)
                    { // Fiebre
                        printf("Nivel 5: �Tienes mucho tiempo ah�?\n");
                        printf("   1. S�\n");
                        printf("   2. No\n");

                        int opcion3;
                        scanf("%d", &opcion3);

                        if (opcion3 == 1)
                        { // Fiebre
                            printf("si ya tomo algo Abrigese y espere que se mejores \n");
                        }
                    }
                }
                else if (opcion3 == 2)
                {
                }
            }
            else if (opcion2 == 2)
            { // Sin fiebre
                printf("Nivel 3: �Tienes tos persistente?\n");
                printf("   1. S�\n");
                printf("   2. No\n");

                int opcion3;
                scanf("%d", &opcion3);

                if (opcion3 == 1)
                {
                }
                else if (opcion3 == 2)
                {
                }
            }
        }
        else if (opcion == 2)
        { // S�ntomas digestivos
            printf("Nivel 2: �Tienes n�useas o v�mitos?\n");
            printf("   1. S�\n");
            printf("   2. No\n");

            int opcion2;
            scanf("%d", &opcion2);

            if (opcion2 == 1)
            { // Fiebre
                printf("Nivel 3: �Tienes dificultad para respirar?\n");
                printf("   1. S�\n");
                printf("   2. No\n");

                int opcion3;
                scanf("%d", &opcion3);

                if (opcion3 == 1)
                {
                    // Continuar con m�s preguntas y recomendaciones...
                }
                else if (opcion3 == 2)
                {
                    // Continuar con m�s preguntas y recomendaciones...
                }
            }
            else if (opcion2 == 2)
            { // Sin fiebre
                printf("Nivel 3: �Tienes tos persistente?\n");
                printf("   1. S�\n");
                printf("   2. No\n");

                int opcion3;
                scanf("%d", &opcion3);

                if (opcion3 == 1)
                {
                    // Continuar con m�s preguntas y recomendaciones...
                }
                else if (opcion3 == 2)
                {
                    // Continuar con m�s preguntas y recomendaciones...
                }
            }
        }

        return 0;
    }
}
