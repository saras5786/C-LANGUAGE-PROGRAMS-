#include <stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("enter a number");
	scanf("%d",n);
	for(i=n;i<=n;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
			sum=sum+j;
		}
		printf("\n");
	}
	return 0;
}
