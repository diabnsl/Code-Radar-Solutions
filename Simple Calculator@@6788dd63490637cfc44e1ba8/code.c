#include <stdio.h>
int main() {
    float x,y;
    float a,b,c,d;
    char opt;
    scanf("%f %f", &x, &y);
    scanf("%c", &opt);
    switch(opt){
        case '+':
            printf("%.2f", x+y);
            break;
        case '-':
            printf("%.2f", x-y);
            break;
        case '*':
            printf("%.2f", x*d);
            break;
        case '/':
            printf("%.2f", x/y);
            break;
            
    }
    
    return 0;
}