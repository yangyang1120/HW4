#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
	char c;
	printf("�п�J�@�Ӧr��:");
	scanf_s("%c", &c);
	if (isupper(c) == 1)
	{
		printf("%c\n", tolower(c));
	}
	else
	{
		printf("%c\n", toupper(c));
	}
	system("pause");
}
