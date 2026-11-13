//https://elblogdelprogramador.com/posts/guia-completa-punteros-c-2025/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 100;
    int *ptr = &valor; // Inicializamos el puntero con la dirección de valor

    printf(":::::  Declaracion y uso de Punteros  :::::\n\n");
    printf("Valor original: %d\n", valor);
    *ptr = 200; // Modificamos el valor a través del puntero
    printf("Valor modificado: %d\n", valor);

    return 0;
}
