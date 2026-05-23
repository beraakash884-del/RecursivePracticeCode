// print name n times using recursion

#include<stdio.h>
void MyName (int, int);

int main()
{
  int N;
 printf("Enter the number of times you want to print my name\n ");
 scanf("%d", &N);
  MyName(1,N);
return 0;
}

void MyName (int i,int n)
{ 
    if(i>n)   // base condition
      return ;
    printf("Akash Bera\n");
    MyName(i+1, n);
}