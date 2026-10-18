#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}Fecha;

typedef struct
{
    char nombre[50];
    int edad;
    Fecha nacimiento; /* estructura anidada */
}Persona;

int main()
{
    Persona p1 = {"Ana", 28, {15, 6, 1998}};
    Persona p2 = {"Juan", 25, {02, 12, 2000}};
    Persona p3 = {"Daniel", 20, {25, 4, 2006}};
    printf("===== PERSONAS =====\n");
    printf("Nombre: %s\n", p1.nombre);
    printf("Edad: %d\n", p1.edad);
    printf("Fecha de nacimiento: %d/%d/%d\n", p1.nacimiento.dia, p1.nacimiento.mes, p1.nacimiento.anio);
    printf("\n\n");
    printf("Nombre: %s\n", p2.nombre);
    printf("Edad: %d\n", p2.edad);
    printf("Fecha de nacimiento: %d/%d/%d\n", p2.nacimiento.dia, p2.nacimiento.mes, p2.nacimiento.anio);
    printf("\n\n");
    printf("Nombre: %s\n", p3.nombre);
    printf("Edad: %d\n", p3.edad);
    printf("Fecha de nacimiento: %d/%d/%d\n", p3.nacimiento.dia, p3.nacimiento.mes, p3.nacimiento.anio);
    printf("\n\n");

    return 0;
}
