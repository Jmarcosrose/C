#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, res, op = 2;

    do {
        printf("inicio del proceso\n");
        printf("::::::::::::::::::::\n");
        printf("Ingresa el primer numero: ");
        scanf("%i", &a);
        printf("\nIngresa el segundo numero: ");
        scanf("%i", &b);
        res = a + b;
        printf("\nLa suma de %i y % i es: %i\n\n", a, b, res);
        printf("\nDeseas otra operacion? Si-1 No-2  ");
        scanf("%i", &op);
    } while (op != 2);
    printf("\n=====Fin del proceso=====");

    return 0;
}
