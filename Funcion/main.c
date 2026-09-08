#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ingresa_dato(char* nom, int ed);
float fCuad1(float a, float b, float c);
float fCuad2(float a, float b, float c);

int main()
{
    float a1, b1, c1, pos, neg;

    ingresa_dato("Ernesto", 28);

    printf("\nIngresa el valor para a: ");scanf("%f", &a1);
    printf("\nIngresa el valor para b: ");scanf("%f", &b1);
    printf("\nIngresa el valor para c: ");scanf("%f", &c1);

    pos = fCuad1(a1,b1, c1);
    neg = fCuad2(a1,b1, c1);

    printf("\nEl valor positivo es %.2f y el valor negativo es %.2f.", pos, neg);

    system("pause");

    return 0;
}

void ingresa_dato(char nom[], int ed)
{

    printf("\nHola que tal %s, tu edad es %i anios.", nom, ed);

}

float fCuad1(float a, float b, float c)
{
    float disc, x1;
    disc = ((b * b) - 4 * a * c);
    x1 = ((-b + sqrt(disc))) / (2 * a);
    return x1;
}
float fCuad2(float a, float b, float c)
{
    float disc, x2;
    disc = ((b * b) - 4 * a * c);
    x2 = ((-b - sqrt(disc))) / (2 * a);
    return x2;
}
