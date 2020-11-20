#include <stdlib.h>
#include <stdio.h>

void main()
{
int unidad, vent[20], i, mayor=0;
    for (i=1; i<21; i++)
        {
        printf("Ingresar el total de la unidades del vendedor %d tras los 15 dias: ", i);
        scanf("%d", &vent[i]);
        unidad = unidad + vent[i];

        if (vent[i] > mayor)
            {
            mayor = i;
            }

        }
    printf("\nEl vendedor con mayor ventas es: %d", mayor);
    printf("\nEL total de ventas vendidas es: %d", unidad);
    return 0;
}
