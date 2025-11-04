#include <stdio.h>
int main()
{
	int i,n,a[100],j,found=0;
	printf("enter the array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("duplicate values are");
	for(i=0;i<n;i++)
   {
	   for(j=i+1;j<n;j++)
	    {
		   if(a[i]==a[j])
		   {
		   printf("\t%d",a[i]);
		   found=1;
		   break;
       	   }
        }
	}
	if(found==0)
	{
		printf("no duplicate value");
    }
return 0;
}
