#include <iostream>
#include <unordered_map>
using namespace std;

int pairSum(int arr[], int n, int x) {
  int count = 0;
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++) {
    if (m.find(x - arr[i]) != m.end()) {
      count += m[x - arr[i]];
    }
    m[arr[i]]++;
  }
  return count;
}
