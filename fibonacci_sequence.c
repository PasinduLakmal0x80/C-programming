#include <stdio.h>

int main() {
    int num = 10;  // Number of terms in the Fibonacci sequence
    int a = 0;     // First term
    int b = 1;     // Second term
    int f;         // Next term

    printf("%d %d", a, b);  // Print the first two terms

    for (int i = 2; i < num; i++) {  // Start loop from 2 because first two terms are already printed
        f = a + b;                   // Compute next term
        printf(" %d", f);            // Print next term
        a = b;                       // Update a
        b = f;                       // Update b
    }

    return 0;
}
