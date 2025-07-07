    #include <stdio.h>

    int countInversionsNaive(int arr[], int n) 
    {
        int invCount = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            for (int j = i + 1; j < n; j++)
             {
                if (arr[i] > arr[j]) 
                {
                    invCount++;
                }
            }
        }
        return invCount;
    }