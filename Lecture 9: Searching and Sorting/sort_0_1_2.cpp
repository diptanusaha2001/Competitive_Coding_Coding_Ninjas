void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void sort012(int arr[], int n) {
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * No need to print or return the output.
   * Taking input and printing output is handled automatically.
   */
  int i = 0;
  int j = n - 1;

  while ((i < n && arr[i] == 0) || (j > -1 && arr[j] == 2)) {
    if (arr[i] == 0)
      i++;
    if (arr[j] == 2)
      j--;
  }
  if (i == n || j == -1)
    return;
  int k = i;
  while (k <= j && i <= j) {
    if (arr[k] != 1) {
      if (arr[k] == 0) {
        swap(arr, i, k);
        i++;
        if (i > k)
          k = i;
      } else {
        swap(arr, k, j);
        j--;
      }
    } else
      k++;
  }
}
