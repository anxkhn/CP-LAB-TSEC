#include <stdio.h>
#include <conio.h>

void main()
{
	int n, flag = 0, i, j;
	char name[100];
	printf("Enter your string \n");
	gets(name);
	for (i = 0; name[i] != '\0'; i++) {}

	n = i - 1;
	for (i = 0, j = n; i < j; i++, j--)
	{
		if (name[i] != name[j])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
	{
		printf("\n Number is a not pallindrome");
	}
	else
	{
		printf("\n Number is pallindrome");
	}
}
