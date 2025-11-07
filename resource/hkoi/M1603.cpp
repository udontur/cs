#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=0;
    string s;
    cin>>n;
    for(int i =0; i<=n; i++){
        getline(cin, s);
        int o=0;
        bool tf=0;
        int m=s.length();
        for(int j =0; j<m; j++){
            if(s[j]=='>'){
                tf=1;
                o=0;
            }else if(tf&&s[j]=='3') o++;
            else if(s[j]=='<'){
                ans+=o;
                tf=0;
                o=0;
            }else{
                tf=0;
                o=0;
            }
        }
    }
    cout<<ans;
    return 0;
}
