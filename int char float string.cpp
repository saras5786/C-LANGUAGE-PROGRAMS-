#include <stdio.h>>
int main()
{
	char name[200];
	int age;
	float weight;
	char sec;
	printf("enter your name:");
	scanf("%s",&name);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your weight:");
	scanf("%f",&weight);
    printf("enter your section:");
    scanf(" %c",&sec);
  	printf("your name is %s\n",name);
   	printf("your age is %d\n",age);
   	printf("your weight is %.2f\n",weight);
   	printf("you belong to %c section",sec);
	return 0;
	
}


