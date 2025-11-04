#include <stdio.h>
int main()
{
	int i,n,a[100],min,max;
	printf("enter the array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%d",&a[i]);	
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("The max term is %d",max);
	printf("\nThe min term is %d",min);
	return 0;
}
