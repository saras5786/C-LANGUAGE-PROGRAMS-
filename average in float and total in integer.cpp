#include <stdio.h>
int main() 
{
	
	float maths,physics,chemistry,hindi,english;
	int total;
	float average;
	printf("Enter Maths marks:");
	scanf("%f",&maths);
	printf("Enter Physics marks:");
	scanf("%f",&physics);
	printf("Enter Chemistry marks:");
	scanf("%f",&chemistry);
	printf("Enter Hindi marks:");
	scanf("%f",&hindi);
	printf("Enter English marks");
	scanf("%f",&english);
	total=maths+physics+chemistry+hindi+english;
	average=total/5.0;
	printf("The total marks is : %d",total);
	printf("\nThe Average marks is : %.2f",average);
	return 0;
	
}
