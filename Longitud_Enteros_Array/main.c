//https://parzibyte.me/blog/posts/longitud-de-un-arreglo-en-c/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Longitud de una variable.
    int varEntero = 15;
    int longitud1 = sizeof(varEntero);
    double varDoble = 1500;
    int longitud2 = sizeof(varDoble);

    //Longitud de un array.
    int arreglo1[] = {10, 20, 30, 40, 50};
    int longitud3 = sizeof(arreglo1);
    double arreglo2[] = {1111, 1112, 1113,1114};
    int longitud4 = sizeof(arreglo2);

    //Dividir el tamaño de todo el arreglo entre el tamaño del primer valor del mismo.
    //Nos da el numero de elementos del array.
    int longitud5 = sizeof arreglo1 / sizeof arreglo1[0];
    int longitud6 = sizeof arreglo2 / sizeof arreglo2[0];

    int longitud7 = sizeof(arreglo1[0]);
    int longitud8 = sizeof(arreglo2[0]);

    printf(":::::::  Longitud y tamaños de variables y array  :::::::\n");
    printf("---------------------------------------------------------\n");
    printf("La variable de tipo entero ocupa %d bytes\n", longitud1);
    printf("La variable de tipo double ocupa %d bytes\n", longitud2);
    printf("El arreglo ocupa %d bytes\n", longitud3);
    printf("El arreglo ocupa %d bytes\n", longitud4);
    printf("El tamaño del arreglo es de %d elementos \n", longitud5);
    printf("El tamaño del arreglo es de %d elementos \n", longitud6);
    printf("El arreglo de tipo entero ocupa %d bytes. "
           "La primer variable ocupa %d bytes. "
           "Entonces el numero de elementos del array es %d\n", longitud3, longitud7, longitud5);
    printf("El arreglo de tipo doble ocupa %d bytes. "
           "La primer variable ocupa %d bytes. "
           "Entonces el numero de elementos del array es %d\n", longitud4, longitud8, longitud6);
    printf("---------------------------------------------------------\n");

    return 0;
}
