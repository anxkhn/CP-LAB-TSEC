#include <conio.h>
#include <stdio.h>

void main()
{
	int a[10][10], b[10][10], c[10][10];
	int r1, c1, r2, c2, i, j, k, sum;
	printf("\nEnter Order of Matrix a (r x c) ");
	scanf("%d %d", &r1, &c1);
	printf("Enter Order of Matrix b (rx c) ");
	scanf("%d %d", &r2, &c2);
	if (c1 == r2)
	{
		printf("\nEnter elements of Matrix a \n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}

		printf("\nEnter the elements of Matrix b \n");
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}

		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				sum = 0;
				for (k = 0; k < c1; k++)
				{
					sum = sum + a[i][k] *b[k][j];
				}

				c[i][j] = sum;
			}
		}

		printf("Multiplication of 2 Matrices is \n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf("%d\t", c[i][j]);
			}

			printf("\n");
		}
	}
	else
	{
		printf("\n Multiplication is not possible");
	}
}
