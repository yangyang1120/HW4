#include<stdio.h>
#include<stdlib.h>

int main()
{
	int d, F[] = {0},i;
	long long int  Fx=0, Fn=1,p;
	printf("請輸入一個整數:");
	scanf_s("%d", &d);
	F[0] = Fx;
	F[1] = Fn;
	if (d >=1)
	{
		printf("F[1]=%lld\n", Fx);
		if(d>=2)
		printf("F[2]=%lld\n", Fn);
	}
	
	for (i = 3;i<=d;i++)
	{
		p = Fx + Fn;
		printf("F[%d]=%lld\n",i, p);
		Fx = Fn;
		Fn =p;
	}
	system("pause");
}