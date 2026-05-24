// sum of parameter wise recursion
#include <stdio.h>
void SumOfNumbers(int n, int sum);

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    SumOfNumbers(number, 0); // sum=0 initialize
    return 0;
}

void SumOfNumbers(int n, int sum)
{
    if (n < 1) // base condition
    {
        printf("%d ", sum);
        return;
    }
    SumOfNumbers(n - 1, sum + n); // This revursive function call n-1 and also adds the current n.
}