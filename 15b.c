#include <conio.h>
#include <stdio.h>

void swap(int *, int *);
void main()
{
	int x, y, *i, *j;
	i = &x;
	j = &y;
	printf("Enter x and y ");
	scanf("%d%d", &x, &y);
	printf("\n Numbers before swapping x=%d and y= %d", x, y);
	swap(&x, &y);
	printf("\n Number after swapping x=%d and y=%d", x, y);
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
