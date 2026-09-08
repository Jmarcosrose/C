#include <stdio.h>
#include <stdlib.h>

void suma();
void resta();
void mult();
void division();

int main()
{

    printf("\n:::::OPERACIONES BASICAS:::::");
    suma();
    resta();
    mult();
    division();

    system("pause");

    return 0;
}

void suma()
{
    int n1, n2, res;

    printf("\n=========SUMA=========");
    printf("\n Ingresa el primer valor: ");
    scanf("%i", &n1);
    printf("\n Ingresa el segundo valor: ");
    scanf("%i", &n2);
    res = n1 + n2;
    printf("\n La suma es: %i", res);
}

void resta()
{
    int n1, n2, res;

    printf("\n========RESTA========");
    printf("\n Ingresa el primer valor: ");
    scanf("%i", &n1);
    printf("\n Ingresa el segundo valor: ");
    scanf("%i", &n2);
    res = n1 - n2;
    printf("\n La resta es: %i", res);
}

void mult()
{
    int n1, n2, res;

    printf("\n=====MULTIPLICACION=====");
    printf("\n Ingresa el primer valor: ");
    scanf("%i", &n1);
    printf("\n Ingresa el segundo valor: ");
    scanf("%i", &n2);
    res = n1 * n2;
    printf("\n La multiplicacion es: %i", res);
}

void division()
{
    int n1, n2, res;

    printf("\n=======DIVISION=======");
    printf("\n Ingresa el primer valor: ");
    scanf("%i", &n1);
    printf("\n Ingresa el segundo valor: ");
    scanf("%i", &n2);
    res = n1 / n2;
    printf("\n La division es: %i", res);
}

