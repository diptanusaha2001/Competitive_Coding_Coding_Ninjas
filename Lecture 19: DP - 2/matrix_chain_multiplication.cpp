#include <iostream>
#include <climits>

using namespace std;

int matrixChainMultiplication(int* arr, int n) {
    int dp[n][n]; // dp[i][j] stores minimum number of multiplications needed to multiply matrices from Ai to Aj
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0; // no multiplication needed for a single matrix
    }
    for (int len = 2; len <= n; len++) { // consider chains of increasing length
        for (int i = 0; i < n - len + 1; i++) { // consider all possible start indices
            int j = i + len - 1; // compute end index
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) { // try all possible splits
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + arr[i] * arr[k + 1] * arr[j + 1]);
            }
        }
    }
    return dp[0][n - 1];
}
