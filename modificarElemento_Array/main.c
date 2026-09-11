#include <stdio.h>
#include <stdlib.h>

void multiplicarPorDos(int arr[], int n);

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    multiplicarPorDos(numeros, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}

void multiplicarPorDos(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}
