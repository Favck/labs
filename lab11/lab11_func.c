#include <stdio.h>
#include <stdlib.h>

float** create_matrix(FILE *fin, int N, int M){
    float** matrix = (float **)malloc(N*sizeof(float *));

    for (int i = 0; i < N; i++) {
        matrix[i] = (float*)malloc(M * sizeof(float));
    }

    for(int i=0; i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            fscanf(fin, "%f", &matrix[i][j]);
        }
    }
    fseek(fin, 0, SEEK_END);
    return matrix;
}

void processing_matrix(FILE *fin,float** matrix, int N, int M)
{
    fprintf(fin, "\n\nСтолбец\tСумма\n");
    float k = 0;
    for(int i=0; i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
          k = k + matrix[j][i];
     
        }
        fprintf(fin, "%4d\t%4.1f\n", i+1,k);
        k=0;
    }
     
}

void service(FILE* fin, float** matrix, int N){
    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);
    fclose(fin);

}
