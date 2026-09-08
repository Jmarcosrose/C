#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void funcCuad();

int main()
{
    printf("\n *****Ecuacion Cuadratica*****");

    funcCuad();

    system("pause");

    return 0;
}

void funcCuad()
{
    float a, b, c, disc, x1, x2;

    printf("\n Ingresa el valor de a: ");
    scanf("%f", &a);
    printf("\n Ingresa el valor de b: ");
    scanf("%f", &b);
    printf("\n Ingresa el valor de c: ");
    scanf("%f", &c);

    disc = (b * b) - 4 * a * c;
    x1 = (-b + sqrt(disc)) / (2 * a);
    x2 = (-b - sqrt(disc)) / (2 * a);

    printf("\n El valor positivo es: %f", x1);
    printf("\n El valor negativo es: %f", x2);
}
