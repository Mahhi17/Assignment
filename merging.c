#include <stdio.h>

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) 
{
    int i = 0; 
    int j = 0; 
    int k = 0; 

    
    while (i < n1 && j < n2) 
    {
        if (arr1[i] <= arr2[j]) 
        {
            mergedArr[k++] = arr1[i++];
        }
         else 
         {
            mergedArr[k++] = arr2[j++];
        }
    }

    
    while (i < n1)
     {
        mergedArr[k++] = arr1[i++];
    }

    
    while (j < n2)
     {
        mergedArr[k++] = arr2[j++];
    }
}

int main() 
{
    int arr1[] = {6,8,9,13,16};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {78,56,34,89};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArr[n1 + n2]; 

    mergeSortedArrays(arr1, n1, arr2, n2, mergedArr);

    printf("Merged sorted array: ");
    for (int i = 0; i < (n1 + n2); i++) 
    {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}