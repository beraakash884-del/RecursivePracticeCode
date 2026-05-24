// This recursive funtion will give sum of n number .
#include <stdio.h>
int SumOfNumbers(int);

int main()
{
    int numbers;
    printf("Enter a number \n");
    scanf("%d", &numbers);
    int sum = SumOfNumbers(numbers);
    printf("\n The sum is: %d\n", sum);
    return 0;
}

int SumOfNumbers(int n)
{
    if (n == 1) // base condition
        return 1;
    // recursive code.
    return n + SumOfNumbers(n - 1);
}