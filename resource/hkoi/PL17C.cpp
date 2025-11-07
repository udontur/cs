#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int li=0, pi=0, ltol=0, ptol=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i =0; i<n; i++){
        if(i+3<n&&s[i]=='P'&&s[i+1]=='C'&&s[i+2]=='M'&&s[i+3]=='S') ptol++;
        if(i+2<n&&s[i]=='L'&&s[i+1]=='S'&&s[i+2]=='C') ltol++;
    }
    if(ltol>ptol) cout<<"LSC\n";
    else if(ltol<ptol) cout<<"PCMS\n";
    else cout<<"Tie\n";
    return 0;
}
