#include <bits/stdc++.h>
using namespace std;
int main(){
    int dp[1001][1001]{0}, maxv=-1, x, y;
    string n, s, ans="";
    bool val=false;
    cin >> n >> s;
    for(int i =1; i<=n.length(); i++){
        for(int j =1; j<=s.length(); j++){
            if(s[j-1]==n[i-1]) {
                dp[i][j]=dp[i-1][j-1]+1;
                maxv=max(dp[i][j], maxv);
            }
        }
    }
    for(int i =1; i<=n.length(); i++){
        for(int j =1; j<=s.length(); j++){
            if(dp[i][j]==maxv){
                x=i;
                y=j;
                val=true;
                break;
            }
        }
        if(val) break;
    }
    while(dp[x][y]!=0){
        ans+=n[x-1];
        x--;
        y--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
