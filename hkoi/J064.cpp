#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sz[501], wea[501][501];
    vector<int> ans;
    unordered_map<int, bool> cov;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>sz[i];
        for(int j =0; j<sz[i]; j++) cin>>wea[i][j];
    }
    for(int i =1; i<=n; i++) cov[i]=0;
    for(int i =n-1; i>=0; i--){
        bool ok=1;
        for(int j =0; j<sz[i]; j++){
            if(cov[wea[i][j]]){
                ok=0;
                break;
            }
        }
        if(ok){
            ans.push_back(i+1);
            for(int j =0; j<sz[i]; j++)
                cov[wea[i][j]]=1;
        }
    }
    bool sol=1;
    for(int i =1; i<n; i++){
        if(!cov[i]){
            sol=0;
            break;
        }
    }
    reverse(ans.begin(), ans.end());
    if(sol) for(auto i: ans) cout<<i<<"\n";
    else cout<<"-1";
    return 0;
}
