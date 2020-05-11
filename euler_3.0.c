
#include <stdio.h>
#include <math.h>

void factor(long int n) {

  int largest = 1;

  printf("Factors of %lu:\n", n);

  while (n%2 == 0) {
    printf("  %d\n", 2);
    n = n/2;
    largest = 2;
    }

  for (int i = 3; i <= sqrt(n); i += 2) {
    while (n%i == 0) {
      printf("%d\n", i);
      n = n/i;
      largest = i;
    }
  }

  if (n > 2) {
    printf("%d\n", n);
    }

  if (n > largest) {
    largest = n;
    }

  printf("\nLargest factor: %d\n", largest);

}

int main() {
  factor(600851475143);

  return 0;
}

