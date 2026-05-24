//  This recursive function will reverse an Array.

#include <stdio.h>
void ReverseArray(int *arr, int i, int j);
void Swap(int *a, int *b);
void Display(int *arr, int size);
int main()
{
    //   int a[]={10,20,30,40,50};  //when size is odd like 5
    // int size=5;
    int a[] = {10, 20, 30, 40}; // when array size is even  like 4
    int size = 4;
    Display(a, size);
    ReverseArray(a, 0, size - 1);
    Display(a, size);
    return 0;
}

void ReverseArray(int *arr, int i, int j)
{
    if (i >= j) // base condition
        return;
    // swap array numbers
    // Swap ((arr+i), (arr+j));
    Swap(&arr[i], &arr[j]);
    // recursive call
    ReverseArray(arr, i + 1, j - 1);
}

// I will create a function only swap elements in an Array.
void Swap(int *a, int *b) // i will use call by reference so that i can swap in memory not localy.
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//  i will display the array using a function

void Display(int *arr, int size)
{
    printf("\n Your array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); //  arr[i] == *(arr+i)
    }
}