#include <stdio.h>
int main() {
    int N,sum,i;
    scanf("%d", &N);
    for (i = 0; i<=N; i++){
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
