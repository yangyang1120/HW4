#include<stdio.h>
#include<stdlib.h>
void hh(int, int, int, int);

int main(void)
{
	int i;
	printf("�`�@���h�ֶ�L�n�h:");
	scanf_s("%d", &i);
	printf("\n");
	hh(i, 1, 2, 3);
	system("pause");
	return 0;
}

void hh(int i, int t, int y, int u)
{
	if (i == 1)
		printf("%d�ӽL�l�q��%d�Ӷ𲾨��%d�Ӷ�\n", i, t, u);
	else
	{
		hh(i - 1, t, y, u);
		printf("�N��%d�ӽL�l�q��%d�Ӷ𲾨��%d�Ӷ�\n\n",
			i, t, u);
		hh(i - 1, y, t, u);
	}
}