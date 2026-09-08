#include <stdio.h>
#include <stdlib.h>

void name(char nombre[]);
void age(int edad);

int main()
{
    char nombre[10];
    int edad;
    printf("Ingresa tu nombre de instructor: ");
    scanf("%s", nombre);
    printf("\nIngresa tu edad: ");
    scanf("%i", &edad);
    printf("\nHola, ");
    name(nombre);
    age(edad);
    printf(" anios. Y estas en mi curso de induccion.");

    return 0;
}

void name(char nombre[])
{
    printf("mi nombre es %s", nombre);
}

void age(int edad)
{
    printf(" y mi edad es de %i", edad);
}
