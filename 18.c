void main()
{
	union info
	{
		char name[100];
		int Id;
	};
	union info s;
	int n;
	printf("what info do you want to provide \n 1.name \n 2.Idnumber\n ");
	scanf("%d", &n);
	switch (n)
	{
		case 1:
			printf("enter your name ");
			scanf("%s", &s.name);
			printf(" your name is %s", s.name);
			break;
		case 2:
			printf("Enter ID \n ");
			scanf("%d", &s.Id);
			printf(" ID Number %d", s.Id);
			break;
		default:
			printf("Invalid input");
	}
}
