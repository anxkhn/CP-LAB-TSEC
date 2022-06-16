#include <stdio.h>
#include <conio.h>

void main()
{
	int i, s, j, k = 0;
	for (i = 1; i <= 3; i++)
	{
		for (s = 3; s > i; s--)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (i = 2; i >= 1; i--)
	{
		for (s = 0; s <= k; s++)
		{
			printf(" ");
		}

		k++;
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}
