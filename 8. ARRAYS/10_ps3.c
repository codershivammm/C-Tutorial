// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

// FUNCTION TO PRINT ARRAY
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// FUCNTION TO REVERSE ARRAY

void reversearr(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    printArr(arr, 5);
    reversearr(arr, 5);
    printArr(arr, 5);

    return 0;
}