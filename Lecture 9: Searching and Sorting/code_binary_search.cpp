#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
  int left = 0, right = n - 1, mid;
  while (left <= right) {
    mid = left + (right - left) / 2;
    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}
