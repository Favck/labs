#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("x=");
    scanf("%f", &x);
    if (x < -6)
        y = 2 * sqrt(x * x + 15);
    else if (x < 2)
        y = 4 * cos(x);
    else if (x < 10)
        y = (sin(x - 3)) / 2;
    else
        y = tan(x) / 10;

    printf("%6.3f\n", y);
    return 0;
}
