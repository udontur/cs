#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    int dp[1001][1001]{0}, an=a.length(), bn=b.length();
    for(int i =1; i<=an; i++){
        for(int j =1; j<=bn; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
        }
    }
    int mx=-1e9, mxi, mxj;
    for(int i =1; i<=an; i++){
        for(int j =1; j<=bn; j++){
            if(mx<dp[i][j]){
                mx=dp[i][j];
                mxi=i;
                mxj=j;
            }
        }
    }
    string s="";
    while(dp[mxi][mxj]!=0){
        s+=a[mxi-1];
        mxi--, mxj--;
    }
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}
