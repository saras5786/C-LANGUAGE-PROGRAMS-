#include <stdio.h>
int main()
{
	int i,n,a[100],num,found=0;
	printf("enter the array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%d",&a[i]);	
	}
	printf("Enter the number to find in the array :");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		{
		printf("\nNumber found at %d",i);
		found=1;
     	}
	}
	if(found==0)
	{
		printf("Not found in the array !");
	}
	
	return 0;
}
