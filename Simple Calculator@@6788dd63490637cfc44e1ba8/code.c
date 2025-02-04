#include <stdio.h>
int main() {
    float x,y;
    float a,b,c,d;
    a = x+y;
    b = x-y;
    c = x*y;
    d = x/y;
    char opt;
    scanf("%f %f", &x, &y);
    scanf("%c", &opt);
    switch(opt){
        case '+':
            printf("%.2f", a);
            break;
        case '-':
            printf("%.2f", b);
            break;
        case '*':
            printf("%.2f", c);
            break;
        case '/':
            printf("%.2f", d);
            break;
            
    }
    
    return 0;
}