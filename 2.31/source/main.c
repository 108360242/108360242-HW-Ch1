#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i = 0;
	int square;
	int cube;
	printf("number   square   cube\n");
	for ( i = 0; i < 4; i++)
	{
		square = i * i;
		cube = i * i * i;
		printf("%d        %d        %d\n", i, square, cube);
	}
	for (i = 4; i < 10; i++)
	{
		square = i * i;
		cube = i * i * i;
		printf("%d        %d       %d\n", i, square, cube);
	}
	square = i * i;
	cube = i * i * i;
	printf("%d       %d      %d\n", i, square, cube);
	system("pause");
	return 0;
}