#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
     if (1 <= x && x < 100){
         printf("In Range");
    } 
    else{
         printf("out of range");
    } 
    return 0;
}