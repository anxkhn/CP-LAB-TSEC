#include <stdio.h>
#include <string.h>

void main()
{
	char str1[50], str2[50];
	int len1, len2, i = 0, l;
	printf("Enter a string 1\n");
	gets(str1);
	printf("Enter a string 2\n");
	gets(str2);
	len1 = 0;
	while (str1[len1] != '\0')
		A 31 TUSHAR M
	len1++;
	len2 = 0;
	while (str2[len2] != '\0')
		len2++;
	if (len1 == len2)
	{
		for (i = 0; i <= len1 - 1; i++)
		{
			if (str1[i] != str2[i])
				break;
		}

		if (i == len1)
			printf("the strings are equal \n");
		else
		{
			printf("the strings are not equal \n");
			for (i = 0; i <= len1 - 1; i++)
			{
				if (str1[i] == str2[i])
					continue;
				else
				{
					if (str1[i] > str2[i])
						printf(" string 1 is greater", str1);
					else
						printf(" string 2 is greater", str2);
				}
			}
		}
	}
	else
	{
		l = (len1 < len2) ? len1 : len2;
		for (i = 0; i <= l - 1; i++)
		{
			if (str1[i] == str2[i])
				continue;
			else
			{
				if (str1[i] > str2[i])
					printf("%s string 1 is greater", str1);
				else
					printf("%s string 2 is greater", str2);
			}
		}

		if (len1 > len2 && i == l)
			printf("string 1 is greater", str1);
		else if (len2 > len1 && i == l)
			printf("string 2 is greater", str2);
	}
}
