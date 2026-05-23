// This code will print one to N number using recursion
#include <stdio.h>
void NumberPrint(int, int);

int main()
{
    int N;
    printf("Enter the number untill you wanna print\n");
    scanf("%d", &N);
    NumberPrint(1,N);
    return 0;
}

void NumberPrint(int i, int n)
{
    if (i>n)     // base condition
      return;
    printf("%d ", i);
      // recursive code
    NumberPrint(i+1 , n);
}