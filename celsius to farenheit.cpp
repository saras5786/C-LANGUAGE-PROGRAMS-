#include <stdio.h>
int main(){
	float celsius,farenheit;
	printf("enter thr temperatue in celsius");
	scanf("%f",&celsius);
	farenheit=(celsius*1.8)+32;
	printf("The temperature in farenheit is %f",farenheit);
	return 0;
}
