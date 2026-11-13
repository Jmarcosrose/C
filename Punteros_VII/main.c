//https:elblogdelprogramador.com/posts/guia-completa-punteros-c-2025/

#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *a, int *b);

int main()
{
    int a = 10, b = 20;
    printf(":::::  Punteros a Funciones  :::::\n\n");
    printf("Antes del intercambio: x = %d, y = %d\n", a, b);
    intercambiar(&a, &b);
    printf("Despues del intercambio: x = %d, y = %d\n", a, b);

    return 0;
}

void intercambiar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
