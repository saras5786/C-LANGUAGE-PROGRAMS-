#include <stdio.h>
int main()
//gets ki avvadhu endukante that has to be done seperately so that it can be read\\
{
	char str1[100],str2[100],str3[100],str4[100];
	printf("enter str1:");
	scanf("%[^\n]s",&str1);
		printf("enter str2");
		scanf(" %[^\n]s",&str2);
			printf("enter str3");
			gets(str3); 
				printf("enter str4");
				fgets(str4,100,stdin);
			    	puts(str1);
			    	printf("\n str2=%s",str2);
					printf("\n str3=%s", str3);
					printf("\n str4=%s", str4);
					
					return 0;
					
}
