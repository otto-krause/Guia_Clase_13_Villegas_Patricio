#include <stdlib.h>
#include <stdio.h>

float prom(int v[]);
//Idem ejercicio anterior.
void main ()
{
int v1[5], i, t, aux;
    printf("Ingresar los 5 numero: \n");
    for (i=0; i<5; i++)
        {
        scanf("%d", &v1[i]);
        }
    for (i=0; i<5; i++)
        {
        for (t=0; t<5; t++)
            {
            if (v1[t] > v1[t+1]){
                aux = v1[t+1];
                v1[t+1] = v1[t];
                v1[t] = aux;
                }
            }
        }
    printf("El promedio de los numero es: %.1f\n", prom(v1));
    printf("EL numero mas grade es: %d", v1[t]);
    return 0;
}

float prom (int v[])
{
float prom=0;
int i, total;
    for (i=0; i<5; i++)
        {
        total= total + v[i];
        }
    prom = total/5;
    return prom;
}



