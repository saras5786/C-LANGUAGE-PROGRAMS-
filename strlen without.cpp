#include <stdio.h>
int main() {
    char a[100];
    int i, len = 0;

    printf("Enter string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++) {
        len++;
    }

    printf("Length of string = %d", len);
    return 0;
}
