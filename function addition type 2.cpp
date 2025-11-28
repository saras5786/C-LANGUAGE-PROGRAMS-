#include <stdio.h> 
int addition();//function decleration
int main()
{
	int result;
	result=addition();//function calling
	printf("\n%d",result);
    return 0;	
}
int addition()//function definition
{
	int a,b,c;
	printf("\n enter a,b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
