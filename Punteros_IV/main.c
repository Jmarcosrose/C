//https://elblogdelprogramador.com/posts/guia-completa-punteros-c-2025/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cadena = "Hola, mundo!";
    printf("Cadena: %s\n", cadena);
    printf("Primer caracter: %c\n", *cadena);
    printf("Segundo caracter: %c\n", *(cadena + 1));
    printf("Tercer caracter: %c\n", *(cadena + 2));
    printf("Cuarto caracter: %c\n", *(cadena + 3));

    return 0;
}
