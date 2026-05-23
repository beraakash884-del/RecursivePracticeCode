// This code  will print N to 1 number with recursion.

#include <stdio.h>
void NumberToOne(int);

int main()
{
   int number;
  printf("\n Enter the number \n");
  scanf("%d", &number);
  NumberToOne(number);
  return 0;
}

void NumberToOne(int n)
{
  if (n == 0) // base condition
    return;
  printf("%d ", n);
  // recursive code
  NumberToOne(n-1);
}
