#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Doing operations using bitwise operators");
	printf("\ndoing operation using and (&) operator on %d & %d is %2d",a,b,a&b);
	printf("\ndonig operation using or (|) operator on %d | %d is %2d",a,b,a|b);
	printf("\ndoing operations using ^(xor) operator on %d ^ %d is %2d",a,b,a^b);
	printf("\ndoing operations using left shift %d << %d is %2d",a,b,a<<b);
	printf("\ndoing operation using right shift %d >> %d is %2d\n",a,b,a>>b);
	printf("doing operator using (~) %d is %2d",a,~a);
	
	return 0;
	
	
	
	
	
	
	
}
