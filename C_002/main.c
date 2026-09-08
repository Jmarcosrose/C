#include <stdio.h>
#include <stdlib.h>

void conversion();

int main()
{
    conversion();

    system("pause");

    return 0;
}

void conversion()
{
    float cent, farh;

    printf("\n Ingresa los grados Centigrados a convertir: ");
    scanf("%f", &cent);
    farh = (cent * 1.8) + 32;
    printf("Los grados convertidos a Farenheith son: %.2f", farh);
    printf("\n Ingresa los grados Farenheith a convertir: ");
    scanf("%f", &farh);
    cent = (farh - 32) / 1.8;
    printf("\nLos grados covertidos a Centigrados son: %.2f", cent);
    printf("\n");
}
