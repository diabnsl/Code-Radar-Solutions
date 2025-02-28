#include <stdio.h>
int main(){
   int x,c;
   int y;
   scanf("%d %d", &x,&y);
   c = x&y;
   printf("%d", c);
   return 0;
}