#include <stdio.h>
int main() {
    char a[100], b[100];
    int i, flag = 0;

    printf("Enter string a: ");
    gets(a);
    printf("Enter string b: ");
    gets(b);

    for(i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        if (a[i] != b[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Both strings are equal");
    else
        printf("Strings are NOT equal");

    return 0;
}
