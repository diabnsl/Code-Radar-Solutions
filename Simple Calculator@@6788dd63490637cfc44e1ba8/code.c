#include <stdio.h>
int main() {
    float x,y;
    char opt;
    scanf("%f %f", &x, &y);
    getchar();
    scanf("%c", &opt);
    switch(opt){
        case '+':
            printf("%.2f", x + y);
            break;
        case '-':
            printf("%.2f", x - y);
            break;
        case '*':
            printf("%.2f", x * y);
            break;
        case '/':
            printf("%.2f", x / y);
            break;
        default:
            printf("error");
            break;
    }
    
    return 0;
}