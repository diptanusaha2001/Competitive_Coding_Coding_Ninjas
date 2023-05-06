#include <bits/stdc++.h>
using namespace std;

void Leaders(int *arr, int len) {
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Print your output exactly in the same format as shown.
   * Don't print any extra line.
   */
  int j = len - 1;
  vector<int> v;
  for (int i = len - 1; i >= 0; i--) {
    if (i == len - 1) {
      v.push_back(arr[i]);
      continue;
    }
    if (arr[i] >= arr[j]) {
      v.push_back(arr[i]);
      j = i;
    }
  }
  for (int i = v.size() - 1; i >= 0; i--) {
    cout << v[i] << " ";
  }
}

