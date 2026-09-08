#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, binario[32], i = 0;

    printf("Introduce un número decimal: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("Binario: 0\n");
        return 0;
    }

    // Divisiones sucesivas entre 2
    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    // Impresión de los residuos en orden inverso
    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");


    return 0;
}
