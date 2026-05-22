// print name n times using recursion

#include<stdio.h>
void MyName (int);
int count=0;
int N ;
int main()
{
 printf("Enter the number of times you want to print my name\n ");
 scanf("%d", &N);
  MyName(N);
return 0;
}

void MyName (int n)
{ 
    if(count==n) 
      return ;
    printf("Akash Bera\n");
   count++;
    MyName(N);
}