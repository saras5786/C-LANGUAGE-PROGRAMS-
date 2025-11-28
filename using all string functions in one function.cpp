#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter str1");
	scanf("%[^\n]s",str1);
	printf("Enter str2");
	scanf(" %[^\n]",str2);
	int a = strlen(str1);
	printf("\nlength of str1 is %d",a);
	strcpy(str1,str2);
	printf("\nAfter using strcpy  is %s",str1);
	strcat(str1,str2);
	printf("\nAfter using strcat is %s",str1);
	strrev(str1);
	printf("\nAfter using streve is %s",str1);
	strupr(str1);
	printf("\nAfter using strupr is %s",str1);
	strlwr(str1);
	printf("\nAfter using strlwr is %s",str1);
	strcmp(str1,str2);
	int res1=strcmp(str1,str2);
    printf("\nAfter comparing and using strcmp result 1 is %d ",res1);
    return 0;
}
