#include <stdio.h>
int main() {
    char a[100], b[100];
    int i;

    printf("Enter string: ");
    gets(a);
    printf("enter string 2");
    gets(b);

    for(i = 0; a[i] != '\0'; i++) {
        b[i] = a[i];
    }
    b[i] = '\0';

    printf("Copied string = %s", b);
    return 0;
}
