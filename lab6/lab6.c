#include <stdio.h>
#include <math.h>


int summa(int n1, int n2, int a2, int a1, int a0){
	int s=0;
	for(int i=n2;i<=n1;i++){
		s = a0*i*i*i +a1*i + a2;
	}
	return s;
}

void print(int m, int b){
	float y;
	y = (float)(2*summa(m,2,5,0,3))/(2*summa(m,2,1,1,3)+summa(m+1,3,b,0,2));
	printf("%6.3f\n", y);
}

int main()
{
	int m, b;
	printf("Parametr summ >=2 m=");scanf("%d", &m);
	printf("Свободный член b=");scanf("%d", &b);
	float y;
	y = (float)(2*summa(m,2,5,0,3))/(2*summa(m,2,1,1,3)+summa(m+1,3,b,0,2));
	printf("%6.3f\n", y);
	print(m, b);
	return 0;
}