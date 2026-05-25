//  This recursive function will reverse an Array.
// But in this code we will use only one veriable (or pointer ) to do recurstion reverse function.
#include <stdio.h>
void ReverseArray(int *arr, int i, int j);
void Swap(int *a, int *b);
void Display(int *arr, int size);
int main()
{
    //   int a[]={10,20,30,40,50};  //when size is odd like 5
    // int size=5;
    int a[] = {10, 20, 30, 40,50}; // when array size is even  like 4
    int size = 5;
    Display(a, size);
    ReverseArray(a, size,0);
    Display(a, size);
    return 0;
}

void ReverseArray(int *arr, int size, int i)
{
    if (i >= size/2) // base condition
        return;
    // swap array numbers
    // Swap ((arr+i), (arr+j));
    Swap(&arr[i], &arr[size-1-i]);
    // recursive call
    ReverseArray(arr,size, i+1);
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