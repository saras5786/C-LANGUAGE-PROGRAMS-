#include <stdio.h>
int main()
{
	int i,n,a[100],sum=0;
	printf("enter the array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
