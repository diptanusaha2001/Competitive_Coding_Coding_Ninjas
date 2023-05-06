int minCostPath(int **input, int m, int n)
{
	//Write your code here
	int dp[m][n]; // create a DP table
	// initialize the first column
dp[0][0] = input[0][0];
for (int i = 1; i < m; i++) {
    dp[i][0] = dp[i-1][0] + input[i][0];
}

// initialize the first row
for (int j = 1; j < n; j++) {
    dp[0][j] = dp[0][j-1] + input[0][j];
}

// fill the DP table row-wise
for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
        dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + input[i][j];
    }
}

return dp[m-1][n-1];  // return the minimum cost to reach the destination

}
