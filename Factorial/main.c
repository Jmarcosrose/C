#include <stdio.h>
#include <stdlib.h>

int Factorial(int n);

int main()
{
    int n;
    printf("Ingresa un numero: ");
    scanf("%i", &n);

    printf("\nEl factorial de %i es: %i", n, Factorial(n));

    return 0;
}

int Factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}
