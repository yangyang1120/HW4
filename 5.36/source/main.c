#include<stdio.h>
#include<stdlib.h>
void hh(int, int, int, int);

int main(void)
{
	int i;
	printf("總共有多少圓盤要搬:");
	scanf_s("%d", &i);
	printf("\n");
	hh(i, 1, 2, 3);
	system("pause");
	return 0;
}

void hh(int i, int t, int y, int u)
{
	if (i == 1)
		printf("%d個盤子從第%d個塔移到第%d個塔\n", i, t, u);
	else
	{
		hh(i - 1, t, y, u);
		printf("將第%d個盤子從第%d個塔移到第%d個塔\n\n",
			i, t, u);
		hh(i - 1, y, t, u);
	}
}