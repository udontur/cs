int knapsack(int n, int wi[], int vi[], int k){ 
    int dp[1001][1001], w[1001], v[1001];
    for(int i =0; i<=n; i++) dp[0][i]=0;
    for(int i =n-1; i>=0; i--) w[i+1]=wi[i];
    for(int i =n-1; i>=0; i--) v[i+1]=vi[i];
    for(int i =1; i<=n; i++){
        for(int j =0; j<=k; j++){
            if(j>=w[i]) dp[i][j]=max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][k];
}
