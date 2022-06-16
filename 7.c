#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, s, k;
	for (i = 1; i <= 3; i++)
	{
		for (s = 3; s > i; s--)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
		}

		for (k = i - 1; k > 0; k--)
		{
			printf("%d", k);
		}

		printf("\n");
	}
}
