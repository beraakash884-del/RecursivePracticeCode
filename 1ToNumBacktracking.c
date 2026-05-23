// In this code i will print numbers from one to num  using recursion (backtracking).

#include <stdio.h>
void PrintNumber(int);

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    PrintNumber(number);
    return 0;
}

// recursion with backtracking.
void PrintNumber(int i)
{
    if (i < 1) // base condition
        return;
    // recursive call
    PrintNumber(i - 1);
    printf("%d ", i);
}