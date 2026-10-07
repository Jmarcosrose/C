#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char marca[10];
    char color[10];
    int modelo;
}autos;

int main()
{
    autos a1 = {"Honda", "Verde", 2018};
    autos a2 = {"VW", "Azul", 2020};
    autos a3 = {"Dodge", "Blanco", 2025};
    autos a4 = {"Ford", "Rojo", 2022};
    autos a5 = {"Seat", "Amarillo", 2026};

    printf("==========LOTE DE AUTOS EN VENTA==========\n");
    printf("El auto numero 1 es un %s color %s y modelo %i.\n", a1.marca, a1.color, a1.modelo);
    printf("El auto numero 2 es un %s color %s y modelo %i.\n", a2.marca, a2.color, a1.modelo);
    printf("El auto numero 3 es un %s color %s y modelo %i.\n", a3.marca, a3.color, a3.modelo);
    printf("El auto numero 4 es un %s color %s y modelo %i.\n", a4.marca, a4.color, a4.modelo);
    printf("El auto numero 5 es un %s color %s y modelo %i.\n", a5.marca, a5.color, a5.modelo);


    return 0;
}
