#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Programa para encontrarla distancia entre dos puntos con el método de Pitágoras.
//La raíz cuadrada de las sumas de los cuadrados de dos puntos.

int main()
{
    float x1, x2, y1, y2, A, B, dist;

    x1 = 2.0;
    x2 = 8.0;
    y1 = 2.0;
    y2 = 10.0;

    A = x2 - x1;
    B = y2 - y1;
    dist = sqrt(pow(A, 2) + (pow(B, 2)));

    printf("La raíz cuadrada de las sumas de los cuadrados es: %.2f\n\n", dist);

    return 0;
}
