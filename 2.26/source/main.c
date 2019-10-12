#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num_1;
	int num_2;
	printf("Enter two ingeters:");
	scanf_s("%d%d", &num_1, &num_2);
	if (num_1%num_2 == 0)
	{
		printf("%d is %d's multiple", num_1, num_2);
	}
	else if (num_2%num_1 == 0)
	{
		printf("%d is %d's multiple", num_2, num_1);
	}
	else
	{
		printf("They are not multiples");
	}
	system("pause");
	return 0;
}