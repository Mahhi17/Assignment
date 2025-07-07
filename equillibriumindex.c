#include <stdio.h>

int findEquilibriumIndex(int arr[], int n) {
    int total_sum = 0;
    int left_sum = 0;

    
    for (int i = 0; i < n; i++) 
    {
        total_sum += arr[i];
    }

    
    for (int i = 0; i < n; i++)
     {
        
        int right_sum = total_sum - left_sum - arr[i];

        
        if (left_sum == right_sum) 
        {
            return i; 
        }

        
        left_sum += arr[i];
    }

    return -1; 
}

int main() 
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int equilibrium_idx = findEquilibriumIndex(arr, n);

    if (equilibrium_idx != -1) {
        printf("Equilibrium index is: %d\n", equilibrium_idx);
    } else {
        printf("No equilibrium index found.\n");
    }

    return 0;
}