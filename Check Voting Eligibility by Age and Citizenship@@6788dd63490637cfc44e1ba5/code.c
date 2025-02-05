#include <stdio.h>
int main() {
    int age,citiz;
    scanf("%d %d", &age,&citiz);
    if (age>=18 && citiz == 1){
        printf("Eligible");
    }
    else if(age<18 && citiz == 1){
        printf("Not Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}