#include <stdio.h>
//trace of matrix
int main()
{
    int a[100][100], i, j, n, sum=0;
    printf ("Enter array size:");
    scanf("%d", &n);

    for (i=0 ; i<n; i++)
    {
        for (j=0 ; j<n; j++)
        {
            printf ("Enter value at a[i][j]:");
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0 ; i<n; i++)
    {
        sum = sum + a[i][i];
    }

    printf ("Trace of matrix is %d", sum);
    return 0;
}
