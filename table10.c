#include <stdio.h>
int main() {
  int number, i;

// int number=4,i;



  printf("Enter an integer: ");
  scanf("%d", &number);
  printf("Multiplication table of %d: \n", number);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", number, i, number * i);
  }
  return 0;
}