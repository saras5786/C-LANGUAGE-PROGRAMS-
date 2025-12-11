#include <stdio.h>

int nthterm(int n, int a, int b, int c)
{
    int sum = 0, i;
    for (i = 1; i <= n; i++)
    {
        sum = a + b + c;
        a = b;
        b = c;
        c = sum;
    }
    return a;
}

int main()
{
    int a, b, c, n, result;
    printf("Enter nth term: ");
    scanf("%d", &n);
    printf("Enter a, b, and c values: ");
    scanf("%d %d %d", &a, &b, &c);
    result = nthterm(n, a, b, c);
    printf("Result: %d\n", result);
    return 0;
}
