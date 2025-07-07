#include <stdio.h>


void reverseArrayIterative(int arr[], int size) 
{
    int start = 0;
    int end = size - 1;
    while (start < end)
     {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        
        start++;
        end--;
    }
}


void reverseArrayRecursive(int arr[], int start, int end) 
{
    
    if (start >= end)
     {
        return;
    }

    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;


    reverseArrayRecursive(arr, start + 1, end - 1);
}


void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {17,13,34,67};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Original array (Iterative): ");
    printArray(arr1, size1);

    reverseArrayIterative(arr1, size1);
    printf("Reversed array (Iterative): ");
    printArray(arr1, size1);

    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\nOriginal array (Recursive): ");
    printArray(arr2, size2);

    reverseArrayRecursive(arr2, 0, size2 - 1);
    printf("Reversed array (Recursive): ");
    printArray(arr2, size2);

    return 0;
}