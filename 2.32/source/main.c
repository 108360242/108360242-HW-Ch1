#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int weight;
	int height;
	int bmi;
	printf("Enter your height in inches: ");
	scanf_s("%d", &height);
	printf("Enter your weight in pounds: ");
	scanf_s("%d", &weight);
	bmi = (weight * 703) / (height * height);
	printf("Your BMI:    %d.\n", bmi);
	if (bmi<18.5)
	{
		printf("You are underweight.\n");
	}
	if (bmi >= 18.5 && bmi<=24.9)	
	{
		printf("You are Normal.\n");
	}
	if (bmi >= 25 && bmi<=29.9)
	{
		printf("You are Overweight.\n");
	}
	if (bmi > 30)
	{
		printf("You are Obese.\n");
	}
	system("pause");
	return 0;
}