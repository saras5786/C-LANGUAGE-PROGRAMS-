#include <stdio.h>
int main()
{
int i,j,n;
printf("enter lines");
scanf("%d",&n);
	for(i=n;i>=1;i--)//naku mari one varake kavali kadha;
	{
		for(j=1;j<=i;j++)//stars matrame increase avtai anthe;
		{
		printf(" * ");	
		}
		printf("\n");	
	}
	return 0;
	
}
