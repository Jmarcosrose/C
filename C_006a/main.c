#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("\n Ingresa el numero que deseas para mostrar la tabla de multiplicar: ");
    scanf("%i", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i \n", n, i, n * i);
    }
    system("pause");
    return 0;
}
