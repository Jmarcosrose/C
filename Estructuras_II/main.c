#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona
{
    char nombre[15];
    char apellido[15];
    int edad;
    float altura;
}p1, p2, p3,p4, p5;

int main()
{
    strcpy(p1.nombre,"Mario");
    strcpy(p1.apellido,"Marquez");
    p1.edad = 18;
    p1.altura = 1.70;

    strcpy(p2.nombre,"Ana");
    strcpy(p2.apellido,"Vasquez");
    p2.edad = 17;
    p2.altura = 1.60;

    strcpy(p3.nombre,"Juan");
    strcpy(p3.apellido,"Martinez");
    p3.edad = 19;
    p3.altura = 1.68;

    strcpy(p4.nombre,"Maria");
    strcpy(p4.apellido,"Jara");
    p4.edad = 17;
    p4.altura = 1.58;

    strcpy(p5.nombre,"David");
    strcpy(p5.apellido,"Varela");
    p5.edad = 19;
    p5.altura = 1.72;

    printf("Nombre y Apellido: %s %s\tEdad: %i\tAltura: %.2f\n", p1.nombre, p1.apellido, p1.edad, p1. altura);
    printf("Nombre y Apellido: %s %s\t\tEdad: %i\tAltura: %.2f\n", p2.nombre, p2.apellido, p2.edad, p2. altura);
    printf("Nombre y Apellido: %s %s\tEdad: %i\tAltura: %.2f\n", p3.nombre, p3.apellido, p3.edad, p3. altura);
    printf("Nombre y Apellido: %s %s\t\tEdad: %i\tAltura: %.2f\n", p4.nombre, p4.apellido, p4.edad, p4. altura);
    printf("Nombre y Apellido: %s %s\t\tEdad: %i\tAltura: %.2f\n", p5.nombre, p5.apellido, p5.edad, p5. altura);


    return 0;
}
