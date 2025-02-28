#include <stdio.h>
int main() {
    int N, i;
    char j;
    scanf("%d", &N);
    for (i = N; i >= 1; i--) {  // Outer loop for rows (starting from N to 1)
        for (j = 1; j <= i; j++) {  // Inner loop for numbers in each row
            printf("%d ", j);  // Print numbers with space
        }
        printf("\n");  // Move to the next line after each row
    }
    return 0;
}
