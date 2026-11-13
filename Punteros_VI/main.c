//https://elblogdelprogramador.com/posts/guia-completa-punteros-c-2025/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 100;
    int *ptr = &valor;
    int **ptr_ptr = &ptr;

    printf(":::::  Punteros a Punteros\n\n");
    printf("Valor: %i\n", valor);
    printf("Valor a traves de ptr: %d\n", *ptr);
    printf("Valor a traves de ptr_ptr: %d\n", **ptr_ptr);

    return 0;
}
