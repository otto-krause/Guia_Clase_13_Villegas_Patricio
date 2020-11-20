#include <stdlib.h>
#include <stdio.h>

void main()
{
int num[10], i, suma=0, prod=1, cont=0;
float prom=0;
    printf("Ingresar 10 numero:\n");
    for (i=0; i<10; i++)
        {
        scanf("%d", &num[i]);
        suma = suma + num[i];
        prod = prod * num[i];
        }
    prom = suma/10;
    for (i=0; i<10; i++)
        {
        if (num[i]<prom)
            {
            cont++;
            }
        }
    printf("La suma de los numero es: %d\n", suma);
    printf("El producto de los numero es: %d\n", prod);
    printf("El promdio de los numero es %.1f y los que estan por debajo son %d", prom, cont);
    return 0;
}
