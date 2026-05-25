#include <stdio.h>
int Fibonacci(int n);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Fibonacci number of %d th position is %d", num, Fibonacci(num));
    return 0;
}
int Fibonacci(int n)
{
    if (n <= 1) // base condition beacuse f(1)=1 or f(0)=0.
        return n;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}