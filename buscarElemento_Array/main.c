
#include <stdio.h>
#include <stdlib.h>

int buscarElemento(int arr[], int n, int valor);

int main()
{
    int numeros[] = {5, 10, 15, 20, 25};
    int indice = buscarElemento(numeros, 5, 15);
    if (indice != -1)
        printf("Elementos encontrados en el indice: %d elementos.\n", indice);
    else
        printf("Elemento no encontrado\n");

    return 0;
}

int buscarElemento(int arr[], int n, int valor)
    {
    for (int i = 0; i < n; i++) {
        if (arr[i] == valor) {
            return i; // Retorna el índice si se encuentra
        }
    }
    return -1; // Retorna -1 si no se encuentra
    }
