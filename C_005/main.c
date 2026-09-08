#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, primo = 1;
    printf("\nPrograma para verificar si un numero es primo.");
    printf("\n==============================================");
    printf("\n     ");
    printf("\nIngrese el numero a verificar: ");
    scanf("%i", &N);
    for(i = 2; i < N; i++)
        {
            if(N % i == 0)
                primo = 0;
        }
        if(primo == 1)
            printf("\nEl numero %i, ES primo.", N);
        else
            printf("\nEl numero %i, NO es primo.", N);

        system("pause");

    return 0;
}
