#include <stdio.h>

void leftRotateArray(int arr[], int n, int d) 
{
    
    d = d % n; 

    
    int temp[d];
    for (int i = 0; i < d; i++)
     {
        temp[i] = arr[i];
    }


    for (int i = d; i < n; i++)
     {
        arr[i - d] = arr[i];
    }

    
    for (int i = 0; i < d; i++)
     {
        arr[n - d + i] = temp[i];
    }
}

void printArray(int arr[], int size)
 {
    for (int i = 0; i < size; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int arr[] = {19,67,45,86,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3; 

    printf("Original array: ");
    printArray(arr, n);

    leftRotateArray(arr, n, d);

    printf("Array after left rotation by %d places: ", d);
    printArray(arr, n);

    return 0;
}