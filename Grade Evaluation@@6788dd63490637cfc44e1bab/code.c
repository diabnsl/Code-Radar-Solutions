#include <stdio.h>
int main() {
    char x;
    scanf("%c", &x);
    switch(x){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Bleow Average");
            break;
        case 'F':
            printf("Fail");
            break;
    }
    return 0;
}