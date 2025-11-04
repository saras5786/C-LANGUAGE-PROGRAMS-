#include <stdio.h>
int main()
{
	
	float a,u,t,distance;
	
	printf("enter the accleration of the body:");
	scanf("%f",&a);
	
	printf("enter the initial velocity of the body:");
	scanf("%f",&u);
	
	printf("enter time taken by the body:");
	scanf("%f",&t);
	
	distance=(u*t)+(a*t*t)/2;
	
	printf("the distance travelled by the body is %.2f",distance);
	
	return 0;	
	
}
