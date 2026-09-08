#define _USE_MINGW_ANSI_STDIO
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double euler(double n);

int main()
{
    double n;

    printf("Programa para desarrollar el numero Euler\n");
    printf("=========================================\n");
    printf(" ");
    printf("Numero: ");
    scanf("%lf", &n);
    printf("\nEl numero Euler es: %.15lf\n", euler(n));

    return 0;
}

double euler(double n)
{
    double eu;
    eu = (1 + (1 / n));
    return pow(eu, n);
}

