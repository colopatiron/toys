/* Ask the user for a number, ask the number of grades */
/* Get the average grade */

#include <stdbool.h>
#include <stdio.h>

float median(float* fNumbers, int n);
float mean(float* fNumbers, int n);

int main() {
  int nNumberOfGrades;
  float fGrades[100];

  printf("Enter number of grades: ");
  scanf(" %d", &nNumberOfGrades);

  for (int i = 0; i < nNumberOfGrades; i++) {
    printf("Enter grade number %d: ", i + 1);
    scanf(" %f", &fGrades[i]);
  }

  printf("The average of the grades is: %.2f\n",
         mean(fGrades, nNumberOfGrades));

  median(fGrades, nNumberOfGrades);
  return 0;
}

float median(float* fNumbers, int n) {
  float fMedian;
  if (!isEven(n)) {
    fMedian = fNumbers[n / 2];
  } else {
    float num1 = fNumbers[n / 2];
    float num2 = fNumbers[n / 2 - 1];
    fMedian = (num + num2) / 2;
  }

  return fMedian;
}

float mean(float* fNumbers, int n) {
  flaot fSum = 0;
  for (int i = 0; i < n; i++) {
    fSum += fNumbers[i];
  }
  return fSum / n;
}

bool isEven(int n) {
  return n % 2 == 0;
}
