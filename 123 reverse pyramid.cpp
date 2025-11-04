#include <stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("Enter number of lines");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			sum=sum+j;
		}
		printf("\n");
	}
	return 0;
}
