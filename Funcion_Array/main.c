//Proceso para sumar numeros naturales.
//2026-09-11

#include <stdio.h>
#include <stdlib.h>

int sumaMatriz(int m[], int n);

int main()
{
    int m[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("*****PROCESO PARA SUMAR NUMEROS NATURALES*****\n");
    printf("----------------------------------------------\n");
    printf("La suma es:  %i\n\n", sumaMatriz(m, n));
    printf("----------------------------------------------\n");
    printf("==========FIN DEL PROCESO==========\n");

    return 0;
}

int sumaMatriz(int m[], int n)
{
    if(n <= 0)
    {
        return 0;
    }
    return m[n - 1] + sumaMatriz(m, n - 1);
}
