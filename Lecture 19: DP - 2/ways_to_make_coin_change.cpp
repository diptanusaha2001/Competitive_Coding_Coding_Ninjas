int countWaysToMakeChange(int denominations[], int numDenominations, int value){
    int dp[numDenominations+1][value+1];

    // initialize base case
    for(int j=1;j<=value;j++) dp[0][j] = 0;
    dp[0][0] = 1;

    // fill dp table
    for(int i=1;i<=numDenominations;i++){
        for(int j=0;j<=value;j++){
            dp[i][j] = dp[i-1][j];
            if(j >= denominations[i-1]) dp[i][j] += dp[i][j-denominations[i-1]];
        }
    }

    return dp[numDenominations][value];
}
