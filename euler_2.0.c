#include<stdio.h>

// Project Euler #2: Sum of even Fibonacci numbers <= 4.0E6

int main()
{
    int n1 = 0, n2 = 1, n3 = 0, bound = 4000000, sum = 0;

    while (n1 + n2 <= bound) {
      n3 = n1 + n2;
      if (n3 % 2 == 0) {
        sum += n3;
      }
      n1 = n2;
      n2 = n3;
    }

printf("Sum of even Fibonacci numbers less than %d:\n%d\n", bound, sum);

return 0;
}
