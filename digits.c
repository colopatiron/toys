#include <stdio.h>

typedef enum {
  ONES = 1,
  TENS = 10,
  HUNDREDS = 100,
  THOUSANDS = 1000
} PlaceValue;

typedef enum {
  THOUSANDS_CHOICE = 1,
  ONES_CHOICE,
  TENS_CHOICE,
  HUNDREDS_CHOICE,
} PlaceValueChoice;

void breakDownDigits(int number,
                     int* thousands,
                     int* hundreds,
                     int* tens,
                     int* ones);

int getNumber(void);
int buildNumber(int thousands, int hundreds, int tens, int ones);

int main() {
  int number, thousands, hundreds, tens, ones;
  PlaceValueChoice placeValueChoice;

  number = getNumber(number);
  breakDownDigits(number, thousands, hundreds, tens, ones);
  placeValueChoice = getPlaceValueChoice();

  switch (placeValueChoice) {
    case THOUSANDS_CHOICE:
      break;
    case HUNDREDS_CHOICE:
      break;
    case TENS_CHOICE:
      break;
    case ONES_CHOICE:
      break;
    default:
      break;
  }

  printf("The new number is: %d\n",
         buildNumber(thoudands, hundreds, tens, ones));
  return 0;
}

void breakDownDigits(int number,
                     int* thousands,
                     int* hundreds,
                     int* tens,
                     int* ones) {
  *thousands = number / THOUSANDS;
  number %= THOUSANDS;

  *hundreds = number / HUNDREDS;
  number %= HUNDREDS;

  *tens = number / TENS;
  *ones = number % TENS;
}

int getNumber(void) {
  int number;

  printf("Enter a number (up to 9999): ");
  scanf(" %d", &number);
  return number;
}

int buildNumber(int thousands, int hundreds, int tens, int ones) {
  return thousands * 1000 + hundreds * 100 + tens * 10 + ones;
}

PlaceValueChoice getPlaceValueChoice(void) {
  PlaceValueChoice placeValueChoice;
  printf(
      "What digit do you want to change?\n\n"
      "[1] Thousands\n"
      "[2] Hundreds\n"
      "[3] Tens\n"
      "[4] Ones\n\n"
      "-> ");
  scanf("%d", &placeValueChoice);
  return placeValueChoice;
}
