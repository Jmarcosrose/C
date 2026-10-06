#include <stdio.h>
#include <stdlib.h>

void dibujaMatriz(int m[4][4]);

int esMatrizSimetrica(int m[4][4]);

int main()
{
    int m[4][4] = {{1, 2, 3, 4},  //Matriz no simetrica.
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14 ,15, 16}};
    /*
    int m[4][4] = {{1, 2, 3, 4},  //Matriz simetrica.
                   {2, 6, 7, 8},
                   {3, 7, 11, 12},
                   {4, 8 ,12, 16}};
    */
    dibujaMatriz(m);

    if (esMatrizSimetrica(m))
    {
        printf("Es matriz simetrica!\n");
    }
    else
    {
        printf(("NO es matriz simetrica\n"));
    }

    return 0;
}

void dibujaMatriz(int m[4][4])
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%i\t", m[i][j]);
        }
        printf("\n");
    }
}

int esMatrizSimetrica(int m[4][4])
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (m[i][j] != m[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

