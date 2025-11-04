#include <stdio.h>
#include<math.h>
int main()
{
	float p,r,t,SI,CI;
	printf("Enter principle amount:");
	scanf("%f",&p);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter Time:");
	scanf("%f",&t);
	SI=(p*t*r)/100;
	CI=p*(pow(1+r/100,t)-1);	
	printf("The value of the simple intrest is : %.2f",SI);	
	printf("\nThe value of Compound intrest is : %.2f",CI);	
	return 0;	
}

