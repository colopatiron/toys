#include <stdio.h>

typedef enum {
  ONES = 1,
  TENS = 10,
  HUNDREDS = 100,
  THOUSANDS = 1000
} PlaceValue;

// enum PlaceValue placeValue;
PlaceValue placeValue;

int main() {
  int number;
  scanf(" %d", &number);

  int thousands = number / 1000;
  printf("Thousands place: %d\n", thousands);

  number %= 1000;
  printf("%d\n", number);

  int hundreds = number / 100;
  printf("Hundreds place: %d\n", hundreds);

  number %= 100;
  printf("%d\n", number);

  int tens = number / 10;
  printf("Tens place: %d\n", tens);

  number %= 10;
  printf("Ones place: %d\n", number);

  tens = 9;
  thousands = 0;

  printf("The new number is: %d\n",
         thousands * 1000 + hundreds * 100 + tens * 10 + number);
  return 0;
}
