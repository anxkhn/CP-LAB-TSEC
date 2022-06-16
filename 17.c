#include <conio.h>
#include <stdio.h>

void main()
	{
		struct students
		{
			char name[100];
			int roll_no;
			int ch, ph, mat, total;
		};
		int i, j, n, dh;
		struct students temp;
		printf("Enter number of students");
		scanf("%d", &n);
		struct students s[n];
		for (i = 0; i < n; i++)
		{
			printf("Enter your name ");
			while (getchar() != '\n');
			gets(s[i].name);
			printf(" Enter your roll no ");
			scanf("%d", &s[i].roll_no);
			printf("Enter your chemistry marks ");
			scanf("%d", &s[i].ch);
			printf("Enter your physics marks ");
			scanf("%d", &s[i].ph);
			printf("Enter your maths marks ");
			scanf("%d", &s[i].mat);
			s[i].total = (s[i].mat + s[i].ch + s[i].ph);
		}

		for (i = 0; i < n - 1; i++)
		{
			for (j = i; j < n; j++)
			{
				if (s[i].total < s[j].total)
				{
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}

		printf("\n merit list");
		printf("\nRank\trollno\tName\tPhysics\tChem\tMaths\tTotalMarks");
		for (i = 0; i < n; i++)
		{
			printf("\n%d%\t %d \t%s\t\%d\t%d\t%d\t%d
				",(i+1),s[i].roll_no,s[i].name,s[i].ch,s[i].ph,s[i].mat,s[i].total);
			}
		}
