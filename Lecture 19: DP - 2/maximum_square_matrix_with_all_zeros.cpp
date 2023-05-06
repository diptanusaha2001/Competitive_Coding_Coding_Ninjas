#include<bits/stdc++.h>
using namespace std;

int findMaxSquareWithAllZeros(int **arr, int n, int m) {
    int** dp = new int*[n+1];
    for(int i=0; i<=n; i++) {
        dp[i] = new int[m+1];
        for(int j=0; j<=m; j++) {
            dp[i][j] = 0;
        }
    }
    int max_size = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(arr[i-1][j-1] == 0) {
                dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                max_size = max(max_size, dp[i][j]);
            }
        }
    }
    for(int i=0; i<=n; i++) {
        delete[] dp[i];
    }
    delete[] dp;
    return max_size;
}
