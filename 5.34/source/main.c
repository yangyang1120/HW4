#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x, y,g;
	printf("�п�J����:");
	scanf_s("%f", &x);
	printf("�п�J����:" );
	scanf_s("%f", &y);
	while (y == 1) {return 0; }
	g = pow(x, y);
	printf("%f",g);
	system("pause");
}