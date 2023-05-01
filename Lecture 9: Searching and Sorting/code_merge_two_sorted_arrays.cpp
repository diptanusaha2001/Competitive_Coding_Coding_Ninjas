#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0, k = 0;
  int temp[n + m];
  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      temp[k] = arr1[i];
      i++;
    } else {
      temp[k] = arr2[j];
      j++;
    }
    k++;
  }
  while (i < n) {
    temp[k] = arr1[i];
    i++;
    k++;
  }
  while (j < m) {
    temp[k] = arr2[j];
    j++;
    k++;
  }
  for (int i = 0; i < n + m; i++) {
    cout << temp[i] << " ";
  }
  cout << endl;
}
