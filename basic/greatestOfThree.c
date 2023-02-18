#include <stdio.h>

int main(void) {
  int num1 = 100;
  int num2 = 1500;
  int num3 = 20000;

  if (num1 >= num2 && num1 >= num3) {
    printf("%d is the greatest number.", num1);
  } else if (num2 >= num1 && num2 >= num3) {
    printf("%d is the greatest number.", num2);
  } else {
    printf("%d is the greatest number.", num3);
		}
    return 0;
  }