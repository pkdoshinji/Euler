
#include<stdio.h>
#include<math.h>

int bound = 999; //Upper bound is inclusive

int main()
{
  int threes, fives, fifteens, total;

  threes = (3 * floor(bound/3) * (floor(bound/3) + 1)) / 2;
  fives = (5 * floor(bound/5) * (floor(bound/5) + 1)) / 2;
  fifteens = (15 * floor(bound/15) * (floor(bound/15) + 1)) / 2;
  total = (threes + fives) - fifteens;
  printf("%d\n", total);
}
