#include <stdio.h>
int main()
{


int a,b,c,max;
printf("Enter a,b and c values:");
scanf("%d%d%d",&a,&b,&c);
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("the largest among the three numbers %d",max);
return 0;


}
