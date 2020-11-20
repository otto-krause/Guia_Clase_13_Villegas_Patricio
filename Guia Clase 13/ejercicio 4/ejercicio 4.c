#include <stdlib.h>
#include <stdio.h>

void main()
{
int i, nota[30];
float prom;
    for (i=0; i<30; i++)
        {
        printf("Ingresar la nota del alumno %d\n", i+1);
        scanf("%d", &nota[i]);
        prom = prom + nota[i];
        }
    printf("El promedio del curso es: %.1f", prom/30);
    return 0;
}
