// This recursive code will give factorial of a given number.
#include <stdio.h>
int Factorial(int);
int main()
{
    int numbers;
    printf("\n Enter a number\n");
    scanf("%d", &numbers);
    int fact = Factorial(numbers);
    printf("Factorial is : %d", fact);
    return 0;
}

int Factorial(int n)
{
    if (n == 0) // base condition
        return 1;
    // recursive call
    return n * Factorial(n - 1);
}