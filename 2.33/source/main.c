#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int milage,oil_money, litre_km, parking_fee, tolls;
	int total;


	printf("Total miles driven per day: ");
	scanf_s("%d", &milage);
	printf("Cost per gallon of gasoline: ");
	scanf_s("%d", &oil_money);
	printf("Average miles per gallon: ");
	scanf_s("%d", &litre_km);
	printf("Parking fees per day: ");
	scanf_s("%d", &parking_fee);
	printf("Tolls per day: ");
	scanf_s("%d", &tolls);
	total = (milage*oil_money) / litre_km + parking_fee + tolls;
	printf("Your cost: %d\n", total);
	system("pause");
	return 0;
}