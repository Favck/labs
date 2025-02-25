#include <stdio.h>
#include <math.h>

int main(){
float x, a, b, p, z, y;
printf("x=");
scanf("%f", &x);
printf("a=");
scanf("%f", &a);
printf("b=");
scanf("%f", &b);
y =  (tan(x) + 3.73) / 4;
p = sqrt(b * b + 19) + 7 * y;
z = (3 * sin(a) + p) / (p + 2);
printf("%5.4f  %6.4f\n", y, z);
return 0;
}

