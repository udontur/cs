vector<int> knapsack(vector<int> c, int k){
    bool dp[31][10001];
    int n=c.size()-1;
    for(int i =0; i<=n; i++) dp[i][0]=1;
    for(int i =1; i<=k; i++) dp[0][i]=0;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=k; j++){
            if(j<c[i]) dp[i][j]=dp[i-1][j];
            dp[i][j]=(dp[i-1][j-c[i]]||dp[i-1][j]);
        }
    }
    int x=n, y=k;
    vector<int> out;
    while(y>0){
        if(dp[x-1][y]) x--;
        else{
            out.push_back(c[x]);
            y-=c[x];
            x--;
        }
    }
    reverse(out.begin(), out.end());
    return out;
}
