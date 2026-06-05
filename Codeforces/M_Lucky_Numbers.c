#include <stdio.h>

// Helper function: check if a number is lucky
int isLucky(int x) {
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return 0; // not lucky
        x /= 10;
    }
    return 1; // lucky
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int found = 0;
    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) printf("-1\n");

    return 0;
}
