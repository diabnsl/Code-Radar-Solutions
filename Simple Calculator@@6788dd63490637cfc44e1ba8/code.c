#include <stdio.h>
int main() {
    int x,y;
    char opt;
    scanf("%d %d", &x, &y);
    getchar();
    scanf("%c", &opt);
    switch(opt){
        case '+':
            printf("%d", x + y);
            break;
        case '-':
            printf("%d", x - y);
            break;
        case '*':
            printf("%d", x * y);
            break;
        case '/':
            printf("%d", x / y);
            break;
        default:
            printf("error");
            break;
    }
    
    return 0;
}