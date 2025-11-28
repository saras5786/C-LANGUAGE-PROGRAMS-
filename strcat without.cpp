#include <stdio.h>
int main() {
    char a[100], b[100];
    int i, j;

    printf("Enter string a: ");
    gets(a);
    printf("Enter string b: ");
    gets(b);

    for(i = 0; a[i] != '\0'; i++);
    for(j = 0; b[j] != '\0'; j++) {
        a[i + j] = b[j];
    }
    a[i + j] = '\0';

    printf("Concatenated string = %s", a);
    return 0;
}
