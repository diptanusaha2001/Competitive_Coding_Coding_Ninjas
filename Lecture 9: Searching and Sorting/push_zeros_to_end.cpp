#include <iostream>
using namespace std;

void swap(int a[], int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void printarr(int a[], int n) {
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}

void pushZeroesEnd(int arr[], int n) {
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * No need to return or print the output.
   * Taking input and printing output is handled automatically.
   */
  if (n == 1)
    return;

  int i = 0, j = 0;

  // Find first zero
  while (i < n) {
    if (arr[i] == 0)
      break;
    i++;
  }
  j = i + 1;
  while (j < n) {
    if (arr[j] == 0)
      j++;
    else {
      swap(arr, i, j);
      i++;
    }
  }
}
