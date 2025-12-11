#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() {
    int i, *ptr, n;

    printf("Enter n size: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1; // Exit with error
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    printf("The entered integers are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", *(ptr + i));
    }

    free(ptr); // Deallocating the memory

    return 0;
}
