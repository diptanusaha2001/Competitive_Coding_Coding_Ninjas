#include <iostream>
#include <algorithm>

using namespace std;

int kthLargest(int* arr, int n, int k) {
    nth_element(arr, arr + n - k, arr + n);
    return arr[n - k];
}

