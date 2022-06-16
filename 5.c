#include <stdio.h>
#include <conio.h>

void main()
{
	int d, n, sum;
	printf("Enter a number ");
	scanf("%d", &n);
	while (n > 0)
	{
		d = n % 10;
		sum = sum + d;
		F
		n = n / 10;
	}

	printf("\n sum of the digit = %d", sum);
}
