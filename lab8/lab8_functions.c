#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void input(int N, int M, float mas[][M])
{
    for (int i = 0; i < N; i++)
    {
        printf("Vvedite stroku number %d:\n", i + 1);
        for (int j = 0; j < M; j++)
        {
            scanf("%f", &mas[i][j]);
        }
    }
}

void print(int N, int M, float mas[][M])
{
    float k = 0;
    int ind1 = 0, ind2 = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (k < abs(mas[j][i]))
            {
                k = mas[j][i];
                ind1 = i;
                ind2 = j;
            }
        }
        printf("max zn v stolbce %d: %6.1f index: [%d][%d]\n", i + 1, k, ind2, ind1);
        k = 0;
    }
    printf("\n");
    printf("Dlia massiva:\n{{");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%6.1f ", mas[i][j]);
        }
        printf("}\n{");
    }
    printf("}");
}