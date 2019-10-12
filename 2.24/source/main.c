#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("Enter your ingeter:");
	scanf_s("%d", &num);
	if (num%2 == 0)
	{
		printf("It is even");
	}
	else
	{
		printf("It is odd");
	}
	system("pause");
	return 0;
}