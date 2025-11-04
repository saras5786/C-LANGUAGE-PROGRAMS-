#include <stdio.h>
int main()
{
	int i,n,a[100];
	printf("enter the array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%d",&a[i]);	
	}
	printf("The reverse of arrays are:");
	for(i=n-1;i>=0;i--)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
