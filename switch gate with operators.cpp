#include <stdio.h>
int main()
{
	char op;
	double first,second;
	printf("Enter operator (+,-,/,*):");
	scanf("%c",&op);
	printf("Enter two operands :");
	scanf("%lf %lf",&first,&second);
	switch(op)
	{
		case'+':
			printf("%lf+%lf=%.1lf",first,second,first+second);
			break;
		case '-':
			printf("%lf-%lf=%.1lf",first,second,first-second);
		    break;
		case'/':
			printf("%lf/%lf=%.1lf",first,second,first/second);
		    break;
		case'*':
			printf("%lf*%lf=%.1lf",first,second,first*second);
			break;
		default:
			printf("Error! Operator not found");
		
	}
	return 0;
}	

