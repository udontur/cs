#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n, v[101], dp[10001], p[10001], f[101];
    cin >> m >> n;
    for(int i =1; i<=n; i++) cin >> v[i];
    for(int i =0; i<=m; i++) dp[i]=1e9;
    dp[0]=0;
    for(int i =1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(v[j]<=i&&dp[i]>dp[i-v[j]]+1){
                dp[i]=dp[i-v[j]]+1;
                p[i]=v[j];
            }
        }
    }
    cout << dp[m] << endl;
    while(m>0){
        f[p[m]]++;
        m-=p[m];
    }
    for(int i =1; i<=n; i++) cout << f[v[i]] << endl;
    return 0;
}
