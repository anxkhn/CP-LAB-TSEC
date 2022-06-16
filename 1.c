#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	float a, b, c;
	float area;
	float s;
	a = 12.5;
	b = 13.3;
	c = 10.8;
	s = (a + b + c) / 2;
	area = sqrt(s *(s - a) *(s - b) *(s - c));
	printf(" Area is= \t%f\n", area);
}
