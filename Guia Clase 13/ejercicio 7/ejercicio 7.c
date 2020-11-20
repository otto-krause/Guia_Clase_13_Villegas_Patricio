#include <stdlib.h>
#include <stdio.h>

void main()
{
int alumnos[15], i;
    printf("Ingresar la nota de los 15 alumno: ");
    for (i=0; i<15; i++)
        {
        scanf("%d", &alumnos[i]);
        }
    printf("La posicio de los alumnos cuya nota es mayor a 8 es:\n");
    for (i=0; i<15; i++)
        {
        if(alumnos[i]>8)
            {
            printf("%d, ", i);
            }
        }
    return 0;
}
