#include <iostream>
using namespace std;

void spiralPrint( int** a,int n,int m ) {
  int k = 0; 
  int l = 0; 
  while (k < n && l < m) {
    
    for (int i = l; i < m; i++) {
      cout << a[k][i] << " ";
    }
    k++;

    
    for (int i = k; i < n; i++) {
      cout << a[i][m - 1] << " ";
    }
    m--;

    
    if (k < n) {
      for (int i = m - 1; i >= l; i--) {
        cout << a[n - 1][i] << " ";
      }
      n--;
    }

    
    if (l < m) {
      for (int i = n - 1; i >= k; i--) {
        cout << a[i][l] << " ";
      }
      l++;
    }
  }
}
