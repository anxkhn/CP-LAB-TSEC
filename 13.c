#include <stdio.h>
#include <conio.h>

float fact(int);
void main()
{
	int n, r;
	float ncr;
	printf("Enter a number n\n");
	scanf("%d", &n);
	printf("Enter a number r\n");
	scanf("%d", &r);
	if (r < n)
	{
		ncr = fact(n) / (fact(r) *fact(n - r));
		printf("Value of %dC%d = %.0f\n", n, r, ncr);
	}
	else
	{
		printf("Inproper input n must be greater then or equal to r");
	}
}

float fact(int n)
{
	int i;
	float f = 1;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			f = f * i;
		}
	}

	return f;
}
