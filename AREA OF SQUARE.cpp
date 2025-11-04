#include <stdio.h>
#include <math.h>
int main()
{
	float side,Area;
	printf("Enter Length of the side : ");
	scanf("%f",&side);
	Area=pow(side,2);
	printf("The area of square is : %.2f",Area);
	return 0;
}
