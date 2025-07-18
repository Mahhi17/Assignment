#include <stdio.h>

void rotateArrayByOne(int arr[], int n) 
{
    if (n <= 1)
     { 
        return;
    }
    int lastElement = arr[n - 1]; 
    for (int i = n - 1; i > 0; i--)
     {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = lastElement; 
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    rotateArrayByOne(arr, n);

    printf("Array after cyclic rotation by one: ");
    printArray(arr, n);

    return 0;
}