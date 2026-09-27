#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int n;

  printf("Enter an integer n to check prime: ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Enter n must be greater than or equal to 2.\n");
  } else {
    if (is_prime(n)) {
      printf("%d is prime.\n", n);
    } else {
      printf("%d is pnot prime.\n", n);
    }
  }

  return 0;
}
