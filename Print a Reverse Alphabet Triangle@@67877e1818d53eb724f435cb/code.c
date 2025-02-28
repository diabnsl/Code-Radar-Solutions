#include <stdio.h>

int main() {
    int i, j;
    char ch;
    int N;

    for (i = N; i >= 1; i--) {
        ch = 'A'; // Start with 'A' for each row
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

