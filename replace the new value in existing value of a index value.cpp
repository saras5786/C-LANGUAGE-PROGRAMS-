#include <stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int i,index_value,new_value;
	for(i=0;i<5;i++)
	{
		printf("\t",a[i]);
	}
	printf("Enter the index value you want to change :");
	scanf("%d",index_value);
	printf("Enter the value you want to replace in that index value ");
	scanf("%d",new_value);
	new_value=a[index_value];
	for(i=0;i<5;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%d",&a[i]);	
	}
	return 0;
}
