#include <iostream>
#include <vector>
using namespace std;

int longestIncreasingSubsequence(int* arr, int n) {
    vector<int> dp(n, 1);
    int ans = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = longestIncreasingSubsequence(arr, n);
    cout << ans << endl;
    delete[] arr;
    return 0;
}
