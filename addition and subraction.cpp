#include <stdio.h>
int main()
{
	int a,b,addition,subraction;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	addition=a+b;
	subraction=a-b;
	printf("The sum of a and b is %d\n",addition);
	printf("The difference between a and b is %d",subraction);
	
	return 0;
}
