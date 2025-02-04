#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x)
    if (x>= 90){
        printf("A");
    }
    else if (x>=80 and x<90){
        printf("B");
    }
    else if (x>=70 and x<80){
        printf("C");
    }
    else if(x<70){
        printf("D");
    }
    else{
        printf("F")
    }
    return 0;
}