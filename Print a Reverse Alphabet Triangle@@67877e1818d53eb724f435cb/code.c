#include <stdio.h>
int main() {
    int j, i;
    int N;
    char ch;
    scanf("%d", &N);
    for (i = N; i >= 1; i--) { 
        ch = 'A' 
        for (j = 1; j <= i; j++) {  
            printf("%c ", ch);
            ch++  
        }
        printf("\n");  
    }
    return 0;
}
