#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void input(int N, int M, float mas[N][M]);
void print(int N, int M, float mas[N][M]);
int main()
{
    int N, M;
    printf("Vvedite N<=10:");
    scanf("%d", &N);
    printf("Vvedite M<=10:");
    scanf("%d", &M);

    // ввод массива
    float mas[N][M];
    input(N, M, mas);

    // Находим наибольшее значение в столбцах и выводим их
    print(N,M,mas);
}
}
