#include <stdio.h>
int main()
{
    int a = 10, *ptr;
    float b = 3.2, *ptr2;

    ptr = &a;
    
    ptr2 = &b;

    printf("\n the value of a is %d", a);
    printf("\n address of a is %x", &a);
    printf("\n value of b is %f",b);
    printf("\naddress of b %x",&b);
    printf(" \n value of ptr %x", ptr);
    printf("\n address of ptr %x", &ptr);
    printf(" \n ptr pointing value %d", *ptr);
    printf("\n the address of ptr2 %d", &ptr2);
    printf(" \n the ptr2 pointing value %f", *ptr2);
    return 0;
}
