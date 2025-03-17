#include <stdio.h>
#include <stdlib.h>

float** create_matrix(FILE *fin, int N, int M);
void processing_matrix(FILE *fin,float** matrix, int N, int M);
void service(FILE* fin, float** matrix, int N);

int main()
{
    FILE *fin;
    fin = fopen("eleven.txt", "r+");
    int N, M;
    fscanf(fin, "%d %d", &N, &M);
 
    float** matrix = create_matrix(fin,N,M);

    processing_matrix(fin,matrix, N,M);

    service(fin,matrix, N);
 
}

