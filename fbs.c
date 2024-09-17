#include <stdio.h>

int main() {
    int sequence[10];

    sequence[0] = 0;
    sequence[1] = 1;

    for (int i = 2; i < 10; i++) {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", sequence[i]);
    }

    return 0;
}
