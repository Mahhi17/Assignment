#include <stdio.h>
#include <limits.h> 

int main() 
{
    int arr[] = {12, 35, 1, 10, 34, 1, 40}; 
    int n = sizeof(arr) / sizeof(arr[0]);   

    
    if (n < 2) 
    {
        printf("Array should have at least two elements.\n");
        return 1; 
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    
    for (int i = 0; i < n; i++)
     {
        if (arr[i] > largest)
         {
            secondLargest = largest; 
            largest = arr[i];        
        } 
        else if (arr[i] > secondLargest && arr[i] != largest)
         {
            
            secondLargest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    
    
    if (secondLargest == INT_MIN)
     {
        printf("No distinct second largest element found (e.g., all elements are the same).\n");
    } 
    else 
    {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}