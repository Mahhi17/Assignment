#include <stdio.h>
#include <stdlib.h>
void findLeaders(int arr[], int n)
 {
    if (n <= 0)
     {
        printf("Array is empty or invalid.\n");
        return;
    }

    
    int max_from_right = arr[n - 1];
    printf("Leaders in the array: %d ", max_from_right);

    
    for (int i = n - 2; i >= 0; i--) 
    
    {
        if (arr[i] > max_from_right)
         {
            max_from_right = arr[i];
            printf("%d ", max_from_right);
        }
    }
    printf("\n");
}

int main()
 {
    int arr1[] = {16, 17, 4, 3, 5, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Array 1: ");
    for (int i = 0; i < n1; i++)
     {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    findLeaders(arr1, n1);

    int arr2[] = {10, 22, 12, 3, 0, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\nArray 2: ");
    for (int i = 0; i < n2; i++)
     {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    findLeaders(arr2, n2);

    int arr3[] = {7, 4, 5, 7, 3};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("\nArray 3: ");
    for (int i = 0; i < n3; i++)
     {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    findLeaders(arr3, n3);

    return 0;
}