#include <stdio.h>
int main()
{
	
	float base,height,area;
	printf("Enter Base and height : ");
	scanf("%f%f",&base,&height);
	area=0.5*base*height;
	printf("Area of triangle is : %.2f",area);
	return 0;
	
}
