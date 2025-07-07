#include <stdio.h>

void countFrequency(int arr[], int size) 
{
    int visited[size]; 

    
    for (int i = 0; i < size; i++)
     {
        visited[i] = 0;
    }

    printf("Frequency of each element:\n");
    for (int i = 0; i < size; i++) 
    {
    
        if (visited[i] == 0) 
        {
            int count = 1; 
            
            for (int j = i + 1; j < size; j++)
             {
                if (arr[i] == arr[j]) 
                {
                    count++;
                    visited[j] = 1; 
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main() 
{
    int arr[] = {1,2,2,3,3,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]); 

    countFrequency(arr, size); 

    return 0;
}