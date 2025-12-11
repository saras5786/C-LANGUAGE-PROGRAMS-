#include <stdio.h>

int main()
{
    int a = 10, *ptr;
    float b = 3.2, *ptr2;

    ptr = &a;
    ptr2 = &b;

    printf("In the value of a is %d, a);
    printf("In the value of address of a is %x, &a);
    printf("In value of b is %f, b);
    printf("address of b %x, &b);
    printf("In value of ptr %x, ptr);
    printf("In address of ptr %x, &ptr);
    printf("In Ptr pointing value %d, *ptr);
    printf("In the address of ptr2 %d, &ptr2);
    printf("In the ptr2 pointing value %f, *ptr2);

    return 0;
}
