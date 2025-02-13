#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i<=10; i = i+1){
        printf(N "x" "%d",i "=" N*i);
    }
}