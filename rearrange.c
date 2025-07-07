#include <stdio.h>
#include <stdlib.h> 

void rearrange_positive_negative(int arr[], int n)
 {
    
    int *temp_arr = (int *)malloc(n * sizeof(int));
    if (temp_arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return;
    }

    int k = 0;

    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < 0)
         {
            temp_arr[k++] = arr[i];
        }
    }

    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] >= 0) 
        {
            temp_arr[k++] = arr[i];
        }
    }

    
    for (int i = 0; i < n; i++) 
    {
        arr[i] = temp_arr[i];
    }

    free(temp_arr); 
}

int main()
 {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rearrange_positive_negative(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}