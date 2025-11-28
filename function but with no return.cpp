#include <stdio.h>
void addition(int a,int b);//fun dec
int main()
{
	int a,b;
	printf("Enter a,b values");
	scanf("%d%d",&a,&b);
	addition(a,b);//call area
	return 0;	
}
void addition(int a,int b)
{
	int c;
	c=a+b;
	printf("\n%d",c);
}
