// This code will print one to N number using recursion
#include <stdio.h>
void NumberPrint(int n);
// global declaration
int count = 1;
int N;
int main()
{
    printf("Enter the number untill you wanna print\n");
    scanf("%d", &N);
    NumberPrint(N);
    return 0;
}

void NumberPrint(int n)
{
    if (count == n)     // here formal arguments n means N (actual argument)
    {
      printf("%d ",N);
        return;
    }    
    printf("%d ", count);
    count++;
    NumberPrint(N);
}