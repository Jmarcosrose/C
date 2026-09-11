#include <stdio.h>
#include <stdlib.h>

int sumaArray(int arr[], int n);

int main()
{
    int m[] = {10, 20, 30, 40, 50};

    printf("La suma de los numeros es: %i", sumaArray(m, 5));

    return 0;
}

int sumaArray(int m[], int n)
    {
        int suma = 0;
        for (int i = 0; i < n; i++)
        {
            suma = suma + m[i];
        }
        return suma;
    }
