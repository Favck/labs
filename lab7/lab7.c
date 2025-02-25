#include <stdio.h>

float input(float mas[], int n);
float massive(float mas[], int len);
float final_massive(float mas1[], float mas2[], float x[], int len);
float print(float mas[], int len);

int main()
{
    int len;
    printf("len = ");
    scanf("%d", &len);

    // massives
    float a[len];
    float b[len];
    float c[len];
    float x[len];
    float y[len];

    // input
    printf("Massive А:\n");
    input(a, len);
    printf("Massive B:\n");
    input(b, len);
    printf("Massive C:\n");
    input(c, len);


    massive(a, len);
    massive(b, len);
    massive(c, len);
    final_massive(a, b, x, len);
    final_massive(a, c, y, len);


    //input
    printf("x=");
    print(x, len);
    printf("y=");
    print(y, len);
}
