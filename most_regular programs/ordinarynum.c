#include <stdio.h>

int count_ordinary_numbers(int n) {
    int count = 0;

    // Loop through all single-digit numbers
    for (int digit = 1; digit <= 9; digit++) {
        int num = digit;
        // Create ordinary numbers by repeating the digit
        while (num <= n) {
            count++;
            num = num * 10 + digit; // Extend the number, e.g., 1 -> 11 -> 111
        }
    }

    return count;
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    // Loop through each test case
    while (t--) {
        int n;
        scanf("%d", &n);

        // Calculate and print the count of ordinary numbers for n
        printf("%d\n", count_ordinary_numbers(n));
    }

    return 0;
}
