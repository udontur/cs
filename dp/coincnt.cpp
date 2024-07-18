int main(){
    int n, c[101], dp[101][1001];
    cin>>n>>m;
    for(int i =1; i<=m; i++) cin>>c[i];
    c[0]=0;
    for(int i =1; i<=m; i++) dp[i][0]=1; 
    for(int i =1; i<=m; i++){
        for(int j =1; j<=n; j++){
            if(j<c[i]) dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i-1][j]+dp[i][j-c[i]];
        }
    }
    cout<<dp[m][n];
    return 0;
}
