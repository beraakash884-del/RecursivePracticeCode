// This code  will print N to 1 number with recursion.

#include<stdio.h>
void NumberToOne(int);
int count;
int number;
int main()
{
printf("\n Enter the number \n");
scanf("%d",&number);
  NumberToOne(number);
return 0;
}

void NumberToOne (int n)
{
    count=n;
 if(count==1)
 {
    printf("%d ",count);   // this will print the one .
     return;
 }
     printf("%d ",count);
     count--;
     NumberToOne(count);
}
