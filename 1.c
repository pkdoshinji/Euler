
#include<stdio.h>

int bound = 1000;

int main()
{
  int i, sum;

  for (i=0; i < bound; i++)

  if ((i % 3 == 0) || (i % 5 == 0))
    sum += i;

  printf("The sum of all multiples of 3 or 5 less than %d is: %d\n", bound, sum);
}
