#include <stdio.h>
#include <stdlib.h>
void sum(int arr1[], int arr2[], int res[], int length) {
  int i;
  for (i = 0; i < length; i++) {
    res[i] = arr1[i] + arr2[i];
  }
}
void sub(int arr1[], int arr2[], int res[], int length) {
  int i;
  for (i = 0; i < length; i++) {
    res[i] = arr1[i] - arr2[i];
  }
}
void mul(int arr1[], int arr2[], int res[], int length) {
  int i;
  for (i = 0; i < length; i++) {
    res[i] = arr1[i] * arr2[i];
  }
}
void divide(int arr1[], int arr2[], int res[], int length) {
  int i;
  for (i = 0; i < length; i++) {
    res[i] = arr1[i] / arr2[i];
  }
}
int main(void) {
  int N, firstArr[30], secondArr[30], result[30];
  int i;
  char op;
  printf("Enter the array size (1 - 30): ");
  scanf("%d", &N);
  printf("Enter %d integers: ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &firstArr[i]);
  }
  printf("Enter %d integers: ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &secondArr[i]);
  };
  printf("Enter an operator: ");
  scanf(" %c", &op);
  switch (op) {
  case '+':
    sum(firstArr, secondArr, result, N);
    break;
  case '-':
    sub(firstArr, secondArr, result, N);
    break;
  case '*':
    mul(firstArr, secondArr, result, N);
    break;
  case '/':
    divide(firstArr, secondArr, result, N);
    break;
  }
  printf("Result: ");
  for (i = 0; i < N; i++) {
    printf("%d ", result[i]);
  }
  return 0;
}
