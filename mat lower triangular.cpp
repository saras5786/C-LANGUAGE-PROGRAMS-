#include <stdio.h>

int main()
{
    int a[100][100], i, j, n;

    printf("Enter size of the square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) // Corrected loop variable to j
        {
            printf("Enter value at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]); // Corrected scanf to read into a[i][j]
        }
    }

    int lower = 1; // Flag to indicate if it's a lower triangular matrix

    // Check if it's a lower triangular matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) // Corrected loop variable to j
        {
            // For a lower triangular matrix, elements above the main diagonal (j > i) must be zero.
            if (j > i && a[i][j] != 0)
            {
                lower = 0; // Not a lower triangular matrix
                break;     // Exit inner loop
            }
        }
        if (lower == 0)
        {
            break; // Exit outer loop if already determined not to be lower triangular
        }
    }

    // Output the result
    if (lower == 1)
    {
        printf("It is a lower triangular matrix.\n");
    }
    else
    {
        printf("It is not a lower triangular matrix.\n"); // Corrected missing double quote
    }

    return 0; // Indicate successful execution
}
