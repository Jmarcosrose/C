#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, suma = 0;
    for(i = 1; i <= 4; i++)
    {
        printf("Ingresa el numero: %i--", i);
        scanf("%i", &num);
        suma = suma + num;
    }
    printf("La suma de los numeros es: %i\n", suma);
    system("pause");
    return 0;
}
