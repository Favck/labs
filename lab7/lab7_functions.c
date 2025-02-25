#include <stdio.h>
float input(float mas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &mas[i]);
    }
}

float massive(float mas[], int len)
{
    float c = 0;
    for (int i = 0; i < len; i++)
    {
        c += mas[i];
    }

    for (int i = 0; i < len; i++)
    {
        mas[i] = mas[i] / c;
    }
}

float final_massive(float mas1[], float mas2[], float x[], int len)
{
    for (int i = 0; i < len; i++)
    {
        x[i] = mas1[i] + mas2[i];
    }
}

float print(float mas[], int len)
{
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%6.3f ", mas[i]);
    }
    printf("}");
}

