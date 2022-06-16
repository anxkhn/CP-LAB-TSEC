#include <stdio.h>

void srch(int a[], int n);
void delt(int a[], int n);
void sort(int a[], int n);
void inst(int a[], int n);
void asrt(int a[], int n);
void dsrt(int a[], int n);
void main()
{
	int n, i, c;
	printf("Enter array size ");
	scanf("%d", &n);
	int a[n], b[n], y[n], q[n];
	printf("Enter element\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("\n choices search 1 \n sort 2 \n inst 3 \n delt 4 \n end 5 \n");
	scanf("%d", &c);
	do {
		switch (c)
		{
			case 1:
				srch(a, n);
				break;
			case 2:
				sort(a, n);
				break;
			case 3:
				inst(a, n);
				break;
			case 4:
				delt(a, n);
				break;
			case 5:
				break;
			default:
				printf("invalid input");
		}

		printf("\n next choice ");
		scanf("%d", &c);
	}

	while (c != 5);
}

void srch(int a[], int n)
{
	int f, i, pos, count;
	printf("Enter the number you want to search ");
	scanf("%d", &f);
	for (i = 0; i < n; i++)
	{
		if (a[i] == f)
		{
			count++;
			pos = i;
		}
	}

	if (count != 0)
	{
		printf("Number latest found at %d", pos);
	}
	else
	{
		printf("Number not found");
	}
}

void sort(int a[], int n)
{
	int ch;
	printf("Ascending 1 or descending 2 ");
	scanf("%d", &ch);
	if (ch == 1)
	{
		asrt(a, n);
	}
	else if (ch == 2)
	{
		dsrt(a, n);
	}
}

void asrt(int a[], int n)
{
	int i, temp, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void dsrt(int a[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i; j < n; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void inst(int a[], int n)
{
	int l, i, p;
	printf("Enter the position you want the number to be entered ");
	scanf("%d", &p);
	n++;
	if (p < n)
	{
		for (i = n - 1; i >= p; i--)
		{
			a[i + 1] = a[i];
		}

		printf("Enter number you want to add ");
		scanf("%d", &l);
		a[p] = l;
		for (i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
	}
	else
	{
		printf("Invalid input");
	}
}

void delt(int a[], int n)
{
	int o, d, i, count;
	printf(" element you want to delete ");
	scanf("%d", &d);
	for (i = 0; i < n; i++)
	{
		if (a[i] == d)
		{
			o = i;
			count++;
		}
	}

	if (count != 0)
	{
		for (i = o; i < n; i++)
		{
			a[i] = a[i + 1];
		}

		n--;
		for (i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
	}
	else
	{
		printf("Number not found");
	}
}
