#include <stdio.h>

// Function prototype
int lcm(int a, int b);

int main() {
    int n1, n2, result;

    printf("Enter two positive integers: ");
    // Corrected scanf to read two integers
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        result = lcm(n2, n1);
    } else {
        result = lcm(n1, n2);
    }

    printf("The LCM of %d and %d is %d\n", n1, n2, result);

    return 0;
}

// Function definition for lcm
int lcm(int a, int b) {
    // 'mul' needs to be static to retain its value across recursive calls if that was the intent,
    // but a non-static approach is generally better for clarity and avoiding side effects.
    // The logic below works with a static variable as written in the original code.
    static int mul = 0;
    mul = mul + b;

    // Check if the current multiple is divisible by both numbers
    if (mul % a == 0 && mul % b == 0) {
        return mul;
    } else {
        // Recursive call
        return lcm(a, b);
    }
}

