#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a[6];
    int n = 0;
    int entrada = 0;


    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 25;
    a[4] = 15;
    a[5] = 100;



    n = 6;
    //n = sizeof(a)/sizeof(*a);
    printf("\nIngrese el numero a buscar: ");
    scanf("%d",&entrada);



    for(int i = 0;i<n;i++)
    {
        if(a[i] == entrada)
        {
            printf("El valor %d ha sido encotrado en posicion %d",i+1);
            break;


        }
    }

    if(!a){
        printf("el numero %d no existe en el programa.\n", entrada);
    }


    return 0;
}
