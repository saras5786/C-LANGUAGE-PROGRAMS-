#include<stdio.h>
int main()
{

	char letter;
	char word[20];
	char line[30];
	printf("enter letter:");
	scanf("%c",&letter); 
	
	printf("\nenter word:");	
	scanf(" %s",&word); 
	
	printf("\nenter line:");
	scanf(" %[^\n]",&line);
	
	printf("\nThe letter is :%c\nThe word is :%s\nThe line is :%s",letter,word,line);
	return 0;	
}
