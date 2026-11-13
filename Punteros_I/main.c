//https://elblogdelprogramador.com/posts/guia-completa-punteros-c-2025/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 50; // Variable que almacena un valor
    int *puntero = &numero; // Puntero que almacena la dirección de numero

    printf(":::::  Punteros  :::::\n\n");
    printf("Valor de numero: %d\n", numero);
    printf("Direccion de numero: %p\n", (void*)&numero);
    printf("Valor del puntero: %p\n", (void*)puntero);
    printf("Valor al que apunta: %d\n", *puntero);

    return 0;
}
