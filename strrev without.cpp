#include <stdio.h>
int main() {
    char a[100], b[100];
    int i, j, len = 0;

    printf("Enter string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
        len++;

    for(j = 0, i = len - 1; i >= 0; i--, j++)
        b[j] = a[i];

    b[j] = '\0';
    printf("Reversed string = %s", b);

    return 0;
}
