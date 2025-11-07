#include <bits/stdc++.h>
using namespace std;
bool same(string a, string b){
    if(a.size()!=b.size()) return 0;
    for(int i =0; i<a.size(); i++)
        if(a[i]!=b[i])
            return 0;
    return 0;
}
void udontur(string s){
    int n=s.size();
    for(int i =1; i<n; i++){
        if(n%i) continue;
        bool okm=1;
        for(int j =i; j<n; j+=i){
            bool ok=1;
            for(int k =0; k<i; k++){
                if(s[k]!=s[j+k]){
                    ok=0;
                    break;
                }
            }
            if(!ok){
                okm=0;
                break;
            }
        }
        if(okm){
            cout<<n/i<<"\n";
            return;
        }
    }
    cout<<1<<"\n";
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        udontur(s);
    }
    return 0;
}
