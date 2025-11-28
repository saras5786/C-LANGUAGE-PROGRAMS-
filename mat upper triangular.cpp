#include <stdio.h>

int main()
{
    int a[100][100], i, j, n;

    printf("Enter size of the square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter value at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int upper = 1; // Flag to indicate if it's an upper triangular matrix

    // Check if it's an upper triangular matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // For an upper triangular matrix, elements below the main diagonal (j < i) must be zero.
            if (j < i && a[i][j] != 0)
            {
                upper = 0; // Not an upper triangular matrix
                break;     // Exit inner loop
            }
        }
        if (upper == 0)
        {
            break; // Exit outer loop if already determined not to be upper triangular
        }
    }

    // Output the result
    if (upper == 1)
    {
        printf("It is an upper triangular matrix.\n");
    }
    else
    {
        printf("It is not an upper triangular matrix.\n");
    }

    return 0; // Indicate successful execution
}
