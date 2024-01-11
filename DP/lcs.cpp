#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string lcs(string n, string s){
    int dp[1001][1001]{0}, maxv=-1, x, y;
    int nl=s.length(), sl=s.length();
    string ans="";
    bool val=0;
    for(int i =1; i<=nl; i++){
        for(int j =1; j<=sl; j++){
            if(s[j-1]==n[i-1]) {
                dp[i][j]=dp[i-1][j-1]+1;
                maxv=max(dp[i][j], maxv);
            }
        }
    }
    for(int i =1; i<=nl; i++){
        for(int j =1; j<=sl; j++){
            if(dp[i][j]==maxv){
                x=i;
                y=j;
                val=1;
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
    return ans;
}
