#include <stdio.h> 
#include <stdlib.h> 

int lcm(int m, int n);
int main()
{
	int p, m, n;
	printf("input two numbers:");
	scanf_s("%d %d", &m, &n);
	p = lcm(m, n);
	printf("兩數的最小公倍數為%d\n", p);
	system("pause");
}
int lcm(int m, int n)
{
	int o,g;
	for (int i = 1000000000;i >= 1;i--)
	{
		if (m%i == 0&&n % i  == 0)
		{
			o = i;
			break;
		}

	}
	
	return((m*n) / o);
	system("pause");
}

