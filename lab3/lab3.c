#include <stdio.h>
#include <math.h>

int main()
{
    float x0, x1, a, h, x, y;
    int n;
    printf("n="); scanf("%d", &n);
    printf("a="); scanf("%f", &a);
    printf("x0="); scanf("%f", &x0);
    printf("x1="); scanf("%f", &x1);
    h = (x1-x0)/(n-1);
    printf(" N      x        y\n");
    for( int i=1; i<=n; i++)
    {
        x = x0 + (i-1)*h;
        y = sqrt((1.6*a*x + sqrt(x))/(2.9*a + 1.2));
        printf("%2d | %6.3f | %6.3f |\n", i, x, y);
        printf("======================\n");
    }
}
