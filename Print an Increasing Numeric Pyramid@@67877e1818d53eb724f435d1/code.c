#include <stdio.h>

int main() {
    int rows, i, j, k;
    scanf("%d", &rows);

    // Loop to create the pyramid
    for (i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print numbers in pyramid format
        for (k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        // Print numbers in reverse order
        for (k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}

