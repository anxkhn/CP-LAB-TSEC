#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, n, temp;
	printf("Enter n\t");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("Ascending order is ")
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
