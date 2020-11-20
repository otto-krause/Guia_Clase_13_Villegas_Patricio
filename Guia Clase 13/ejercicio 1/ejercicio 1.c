#include <stdlib.h>
#include <stdio.h>

int suma(int v[]);

void main ()
{
    int vr[5], i=0, total=0;
    printf("Ingresar los valores de las 5 resistencias:\n");
    for (i=0; i<5; i++)
        {
        scanf("%d", &vr[i]);
        }
    printf("El valor total de la resistencia en serie es: %d", suma(vr));
    return 0;
}

int suma(int v[])
{
    int total=0, i=0;
    for (i=0; i<5; i++)
        {
        total = total+v[i];
        }
    return total;
}
