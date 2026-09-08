#include <stdio.h>

void condicional()
{
    int edad = 0;
    printf("Ingresar edad: ");
    scanf("%i", &edad);

    if (edad >= 18)
    {
        printf("Ya eres mayor de edad");
        if (edad < 30)
        {
            printf(" y eres un adulto joven");
        }
        else if (edad >= 30 & edad <= 59)
        {
            printf(" y eres un adulto maduro");
        }
        else
        {
            printf(" y eres un adulto mayor");
        }
    }
    else
    {
        printf("Aun eres menor de edad");
        if (edad >= 12)
        {
            printf(" y eres un adolescente");
        }
        else if (edad > 5)
        {
            printf(" y eres un niño");
        }
        else
        {
            printf(" y eres un bebe");
        }
    }

}
