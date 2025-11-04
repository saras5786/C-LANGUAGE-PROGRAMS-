#include <stdio.h>
#include <math.h>
int main()
{
	float a,squareroot;
	printf("Enter a number:");
	scanf("%f",&a);
	squareroot=pow(a,0.5);
	printf("The square root of the number is : %.2f",squareroot);
	return 0;	
}
