#include <stdio.h>
int main() {
    double  x;
    scanf("%lf", &x);
    switch(x) {
        case('1','3','5','7','10','12'):
                printf("31");
                break;
        case '2':
            printf("28");
            break;
        case ('4','6','8','9'.'11'):
            printf("30");
            break;
        default:
            printf("Invalid input");
            break;
    }
    
    return 0;
}