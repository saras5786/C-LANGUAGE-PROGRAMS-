#include <stdio.h>
#include <math.h>
int main ()
{
	
	
	int num,rem,sum=0,digi,temp;
	printf("Enter n :");
	scanf("%d",&num);
	digi=(int)log10(num)+1;
	temp=num;
	while(num!=0)
	{
		num=num%10;
		sum=sum*10+pow(num,digi);
		num=num/10;
		
	}
	if(temp==num)
	{
		printf("Amstrong number");
	}
	else
	{
	    printf("Not a Amstrong number");
}
	
	return 0;
}
