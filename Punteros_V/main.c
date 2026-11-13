//https://www.youtube.com/watch?v=y3K3jb3wv2I&list=PLPhfinNFf68I&index=6

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char msg[] = "Ejemplo de frase con punteros\n\n";
    char *p = msg;

    printf(":::::  Punteros y Cadenas  :::::\n\n");
    printf("Palabras de la frase: ");
    while(*p != '\0')
    {
        printf("%c", *p);
        p++;
    }

    return 0;
}
