#include <conio.h>
#include <stdio.h>

void main()
{
	int m, n, i, j;
	printf("Enter the order of matrix");
	scanf("%d %d", &m, &n);
	int a[m][n];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Element[%d], [%d]", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("THE MATRIX =\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}

	printf("THE TRANSPOSE IS \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", a[j][i]);
		}

		printf("\n");
	}
}
