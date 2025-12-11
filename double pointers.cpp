#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    int **dtpr;
    dtpr = &ptr;

    printf("value of a %d\n", a);
    printf("address of a %p\n", &a);
    printf("value of ptr %p\n", ptr);
    printf("Address of ptr %p\n", &ptr);
    printf("value of dtpr %p\n", dtpr);
    printf("address of dtpr %p\n", &dtpr);
    printf("value of *dtpr %p\n", *dtpr);
    printf("value of **dtpr %d\n", **dtpr);
    printf("ptr pointing value %d\n", *ptr);
    printf("dtpr pointing value %d\n",*dtpr);
    printf("%d",*(&a));
    return 0;
}
