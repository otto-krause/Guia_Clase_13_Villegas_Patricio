#include <stdlib.h>
#include <stdio.h>

void main()
{
int num[10], i, ascen=0, descen=0, des=0;
    printf("Ingresar 10 numero distintos de 0:\n");
      for(i=0; i<10; i++)
        {
        scanf("%d", &num[i]);
        }
    for(i=0; i<10; i++)
        {
        if (num[i] < num[i+1])
            {
            ascen++;
            }
        else
            {
            if(num[i] > num[i+1])
                {
                descen++;
                }
            }
        }
    if (ascen == 10)
        {
        printf("Numeros ingresados de forma ascendente\n");
        }
    else
        {
        if(descen == 9)
            {
            printf("Numeros ingresados de forma descendente\n");
            }
        else
            {
            if(ascen < 9)
                {
                printf("Numeros ingresados de forma desordenada\n");
                }
            }
        }
    printf("La suma entre el primer numero y el ultimo es %d", num[0] + num[9]);
    return 0;
}

