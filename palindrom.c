#include <stdio.h>
int Palindrom(char *str, int size, int i);
int main()
{
   int size;
   char str[] = "madam";
   size = sizeof(str) / sizeof(char);
   size = size - 1; // because we don't want to count the null chartecter .
   if (Palindrom(str, size, 0) == 1)
      printf("palindrom\n");
   else
      printf("Not palindrom");
   return 0;
}

int Palindrom(char *str, int size, int i)
{
   if (i >= size / 2)                    // base condition
      return 1;                          // it is a palindrom.
   else if (str[i] != str[size - 1 - i]) // base condition
      return 0;                          // it is not a palindrom
   // here the recursive call
    return Palindrom(str, size, i + 1);
}