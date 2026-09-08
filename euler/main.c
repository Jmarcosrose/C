#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n, e;

    printf("Ingresa numero: ");
    scanf("%lf", &n);

    e = (1 + (1 / n));

    printf("\n%lf\n", pow(e, n));

    return 0;
}
