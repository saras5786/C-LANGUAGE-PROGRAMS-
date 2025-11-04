#include <stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int i,index_value,new_value;
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
    }
	printf("\nEnter the index value you want to change :");
	scanf("%d",&index_value);
	printf("\nEnter the value you want to replace in that index value ");
	scanf("%d",&new_value);
	a[index_value]=new_value;
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
