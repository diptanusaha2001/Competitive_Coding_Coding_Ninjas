#include <iostream>
using namespace std;

int duplicateNumber(int arr[], int n) {
  int duplicate = 0;
  for (int i = 0; i < n; i++) {
    if (arr[abs(arr[i])] >= 0) {
      arr[abs(arr[i])] = -arr[abs(arr[i])];
    } else {
      duplicate = abs(arr[i]);
      break;
    }
  }
  return duplicate;
}
