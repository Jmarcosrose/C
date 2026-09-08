#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDecimal, i = 0;
    int binario[32]; // Array para almacenar los restos (máximo 32 bits)

    printf("Ingrese un numero decimal: ");
    scanf("%d", &numeroDecimal);

    // Proceso de conversión
    while (numeroDecimal > 0) {
        binario[i] = numeroDecimal % 2; // Almacena el resto
        numeroDecimal = numeroDecimal / 2; // Actualiza el número dividiéndolo por 2
        i++;
    }

    printf("El numero en binario es: ");
    for (int j = i - 1; j >= 0; j--) { // Imprime los restos en orden inverso
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
