#include <stdio.h>
int main()
{
	float celsius,farenheit;
	printf("enter temperature in farenheit:");
	scanf("%f",&farenheit);
	celsius=(farenheit-32)/1.8;
	printf("the temperatue in celsius is %.2f",celsius);
	return 0;

}
