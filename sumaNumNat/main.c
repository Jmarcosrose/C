#include <stdio.h>
#include <stdlib.h>
#include "sumaNumNat.h"

int main()
{
    printf("SUMA DE NUMEROS NATURALES\n");
    printf("=========================\n");
    int n;
    printf("Ingresa un numero: ");
    scanf("%i", &n);

    printf("\n\nLa suma de los numeros hasta el %i es: %i", n, sumaNumNat(n));
    printf("\n\n\n");

    return 0;
}
