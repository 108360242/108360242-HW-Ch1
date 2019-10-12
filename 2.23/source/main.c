#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int num_1;
	int num_2;
	int num_3;
	int num;
	printf("Enter three integers:");
	scanf_s("%d%d%d", &num_1, &num_2, &num_3);
	if (num_3>num_2)
	{
		num = num_2;
		num_2 = num_3;
		num_3 = num;
	}
	if (num_2>num_1)
	{
		num = num_1;
		num_1 = num_2;
		num_2 = num;
	}
	if (num_3 > num_2)
	{
		num = num_2;
		num_2 = num_3;
		num_3 = num;
	}
	printf("The largest number is: %d\nThe smallest number is: %d", num_1, num_3);
	system("pause");
	return 0;
}