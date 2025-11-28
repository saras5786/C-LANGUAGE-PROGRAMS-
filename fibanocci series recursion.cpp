#include <stdio.h>

// Function prototype for the fibonacci function
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    // Recursive step: Fibonacci(n) is the sum of the two preceding numbers
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n,i;
    printf("\nEnter n value: ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
	{
        printf("\t%d",fibonacci(i));
        return 0;
    }
    
}
