#include <stdio.h>
#include <math.h>

int main()
{
    float x, S=0, S1=0, S2=0, y;
    int m, n;
    printf("x=");scanf("%f", &x);
    printf("m=");scanf("%d", &m);
    printf("n=");scanf("%d", &n);

    for(int k=1;k<=m;k++){
        S1 += pow(-1, k)*k;
    }
    for(int i=1; i<=n; i++){
        S2=0;
    for(int j=1; j<=m;j++){
        S2 += 2*i + j;
    }
    S += (S1+x)/(1+S2);
    }
    y = S;
    
    printf("%6.3f\n", y);
    return 0;
}
