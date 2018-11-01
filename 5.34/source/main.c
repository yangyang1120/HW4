#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x, y,g;
	printf("請輸入底數:");
	scanf_s("%f", &x);
	printf("請輸入指數:" );
	scanf_s("%f", &y);
	while (y == 1) {return 0; }
	g = pow(x, y);
	printf("%f",g);
	system("pause");
}