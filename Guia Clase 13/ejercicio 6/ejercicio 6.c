#include <stdlib.h>
#include <stdio.h>

void main()
{
int sueldo[20], i, cont=0, cont1=0;
    printf("Ingrese el sueldo de las 20 personas:\n");
    for (i=0; i<20; i++)
        {
        scanf("%d", &sueldo[i]);
        if (sueldo[i] > 2000)
            {
            cont = cont + 1;
            }
        else
            {
            cont1 = cont1 + 1;
            }
        }
    printf("Las personas que ganas mas de 2000 pesos son: %d", cont);
    printf("\nLas personas que ganan menos de 2000 pesos son: %d", cont1);
    return 0;
}
