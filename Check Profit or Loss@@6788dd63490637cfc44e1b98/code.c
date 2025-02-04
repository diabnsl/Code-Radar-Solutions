#include <stdio.h>

int main() {
    int cp,sp;
    scanf("%d\n", &cp,&sp);
    if (cp < sp) {
        printf("Profit");
        break;
    }
    else if (cp > sp) {
        printf("Loss");
        break;
    }
    else if (cp == sp) {
        printf("No Profit No Loss");
        break;
    }
    return 0;
}