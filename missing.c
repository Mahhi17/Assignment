#include <stdio.h>

int find_missing_number(int arr[], int n)
 {
  int expected_sum = n * (n + 1) / 2;
  int actual_sum = 0;
  for (int i = 0; i < n - 1; i++) 
  {
    actual_sum += arr[i];
  }
  return expected_sum - actual_sum;
}

int main()
 {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  int arr[n - 1];
  printf("Enter %d numbers (from 1 to %d, with one missing):\n", n - 1, n);
  for (int i = 0; i < n - 1; i++)
   {
    scanf("%d", &arr[i]);
  }

  int missing_number = find_missing_number(arr, n);
  printf("The missing number is: %d\n", missing_number);

  return 0;
}