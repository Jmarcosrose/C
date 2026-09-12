#include <stdio.h>
#include <stdlib.h>

int arrayFactorial(int m[], int n);

int main()
{
    int m[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("======Calculo del Factorial de un numero=====\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\nEl factorial de %i es: %i\n\n", n, arrayFactorial(m, n));
    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("=====FIN DEL PROCESO=====");

    return 0;
}


int arrayFactorial(int m[], int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return m[n - 1] * arrayFactorial(m, n - 1);
    }
}
