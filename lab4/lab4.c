#include <stdio.h>
#include <math.h>

int main()
{
    char a;
 float x, y, result,m;
 int n, i;
    printf("x=");scanf("%f", &x);
 printf("n=");scanf("%d", &n);
 printf("F,f,1 - for\nW,w,2 - while\nD,d,3- do-while\n4 - Останов\n");
 while(1){
     y=0;
  i=1;
  printf("a=");scanf("\n%c", &a);

  result=0;
  m= 1.2*sqrt(x);
  switch(a){
  case 'f':
  case 'F':
  case '1':
      for(i=1;i<=n;i++){
       result += sqrt(i*x) + sqrt(i)+m;
  }
  y = pow(result, 1.0/3);
  printf("%f\n", y);
  break;
  case 'w':
  case 'W':
  case '2':
   while(i<=n){
    result += sqrt(i*x) + sqrt(i)+m;
    i++;
   }
   y = pow(result, 1.0/3);
   printf("%f\n", y);
   break;
  case 'd':
  case 'D':
  case '3':
   do{
    result += sqrt(i*x) + sqrt(i)+m;
    i++;
   }while(i<=n);
   y = pow(result, 1.0/3);
   printf("%f\n", y);
       break;
     case '4':
      return 0;
  default:
      printf("НЕПРАВИЛЬНЫЙ СИМВОЛ\n");
  }
 }
 return 0;
}
