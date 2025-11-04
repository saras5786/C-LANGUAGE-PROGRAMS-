#include <stdio.h>
int main()
{
	int n,count=0,a=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(a;a<=n;a++)
	{
		if(n%a==0)
		{
			count++;	
		}
	}
	if(count==2)
	{
		printf("primr number");
		
	}
	
	else
	{
		printf("not a prime number");	
	}
	return 0;
}


