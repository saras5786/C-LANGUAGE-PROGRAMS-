#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,sum=0;
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	scanf("%d",&n);
	if(arr==NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
	
}
