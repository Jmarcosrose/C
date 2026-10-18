#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[15];
    char apellido[15];
    int edad;
    float altura;
}Persona;

int main()
{
    Persona p1 = {"Mario", "Marquez", 18, 1.70};
    Persona p2 = {"Ana", "Vasquez", 17, 1.60};
    Persona p3 = {"Juan", "Martinez", 19, 1.68};
    Persona p4 = {"Maria", "Jara", 17, 1.58};
    Persona p5 = {"David", "Varela", 19, 1.72};

    printf("Nombre y Apellido: %s %s\tEdad: %i\tAltura: %.2f\n", p1.nombre, p1.apellido, p1.edad, p1. altura);
    printf("Nombre y Apellido: %s %s\t\tEdad: %i\tAltura: %.2f\n", p2.nombre, p2.apellido, p2.edad, p2. altura);
    printf("Nombre y Apellido: %s %s\tEdad: %i\tAltura: %.2f\n", p3.nombre, p3.apellido, p3.edad, p3. altura);
    printf("Nombre y Apellido: %s %s\t\tEdad: %i\tAltura: %.2f\n", p4.nombre, p4.apellido, p4.edad, p4. altura);
    printf("Nombre y Apellido: %s %s\t\tEdad: %i\tAltura: %.2f\n", p5.nombre, p5.apellido, p5.edad, p5. altura);

    return 0;
}
