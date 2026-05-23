// This code will print from number (user input) to 1  using recursion (backtracking)

#include <stdio.h>
void PrintNumberRev(int, int);
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    PrintNumberRev(1, number);
    return 0;
}

void PrintNumberRev(int i, int n)
{
    if (i > n) // base condition
        return;
    // backtracking recursive function
    PrintNumberRev(i + 1, n);
    printf("%d ", i);
}