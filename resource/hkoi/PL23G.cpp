#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    string ai="As an AI model, my output is limited to 500 characters.";
    int n;
    cin>>n;
    string s;
    getline(cin, s);
    int cnt=0;
    for(int i =0; i<n-1; i++){
        getline(cin, s);
        cnt+=s.size()+1;
    }
    getline(cin, s);
    reverse(ai.begin(), ai.end());
    bool gpt=1;
    int red=0;
    for(int i =0; i<ai.size(); i++){
        red++;
        if(s[s.size()-i-1]!=ai[i]){
            gpt=0;
            break;
        }
    }
    cnt+=s.size()-red;
    if(gpt&&cnt==500) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
