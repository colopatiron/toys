#include <stdbool.h>
#include <stdio.h>

bool divisibleByN(int number, int n);

int main() {
  int number;
  scanf(" %d", &number);

  for (int i = 1; i <= number; i++) {
    bool fizzBuzz = false;
    if (divisibleByN(i, 3)) {
      printf("Fizz");
      fizzBuzz = true;
    }
    if (divisibleByN(i, 5)) {
      printf("Buzz");
      fizzBuzz = true;
    }
    if (!fizzBuzz) {
      printf("%d", i);
    }
    printf("\n");
  }

  return 0;
}

bool divisibleByN(int number, int n) {
  return number % n == 0;
}
