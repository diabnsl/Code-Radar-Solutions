#include <stdio.h>
int main() {
  float side;
  scanf("%f", &side);
  float area = 3.14 * side * side;
  printf("%.2f", area);
    return 0;
}