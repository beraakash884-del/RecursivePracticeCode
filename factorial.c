// we will print factorial of a given number

#include <stdio.h>
void Factorial(int, int);
int main()
{
    int numbers;
    printf("\n Enter a number\n");
    scanf("%d", &numbers);
    Factorial(numbers, 1); // initialize fact with 1.
    return 0;
}

void Factorial(int n, int fact)
{
    if (n < 1) // base condition
    {
        printf("Factorial is: %d ", fact);
        return;
    }
    Factorial(n - 1, fact * n);
}