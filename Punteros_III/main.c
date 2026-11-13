//https:elblogdelprogramador.com/posts/guia-completa-punteros-c-2025/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int *ptr = array; // El nombre del arreglo es un puntero al primer elemento

    printf(":::::  Punteros y arreglos  :::::\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %i: %i\n", i, *(ptr + i));
    }

    return 0;
}
