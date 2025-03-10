#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int msbMask = 1<< 31
    if (x & msbMask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}