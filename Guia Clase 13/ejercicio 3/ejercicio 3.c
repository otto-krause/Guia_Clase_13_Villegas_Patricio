#include <stdlib.h>
#include <stdio.h>

void main()
{
int i=0, num, num1, max=0, cont=0;

    printf("Ingresar dos numero:\n");
    scanf("%d\n%d", &num, &num1);
    if (num<num1)
        {
        for (i=num+1; i<num1; i++)
            {
            max= max+1;
            }
        int v[max];
        for(i = num+1; i<num1; i++)
            {
            v[cont++] = i;
            }
        printf("Los numeros intermedios de los ingresados son:\n");
            for(i=0; i<max; i++)
                {
                printf("%d ", v[i]);
                }
        }
    else
        {
        for (i=num1+1; i<num; i++)
            {
            max= max+1;
            }
        int v[max];
        for(i = num1+1; i<num; i++)
            {
            v[cont++]=i;
            }
        printf("Los numeros intermedios de los ingresados son:\n");
        for(i=0; i<max; i++)
            {
            printf("%d ", v[i]);
            }
        }
return 0;
}
