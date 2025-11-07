int main(){
    int m, n;
    cin>>m>>n;
    int c[101];
    for(int i =0; i<n; i++) cin>>c[i];
    int dp[10001], back[10001];
    for(int i =0; i<=m; i++) dp[i]=1e9;
    for(int i =0; i<=m; i++) back[i]=-1;
    dp[0]=0;
    for(int i =0; i<n; i++){
        for(int j =1; j<=m; j++){
            if(c[i]>j) continue;
            if(dp[j]>dp[j-c[i]]+1){
                dp[j]=dp[j-c[i]]+1;
                back[j]=i;
            }
        }
    }
    cout<<dp[m]<<"\n";
    int fnd=m, f[10001]{0};
    while(back[fnd]!=-1){
        f[c[back[fnd]]]++;
        fnd-=c[back[fnd]];
    }
    for(int i =0; i<n; i++)
        cout<<f[c[i]]<<"\n";
    return 0;
}
