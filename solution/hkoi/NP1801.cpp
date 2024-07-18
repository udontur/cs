#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("title.in", "r", stdin);
    freopen("title.out", "w", stdout);
    string s;
    getline(cin, s);
    int n=s.length(), ans=0;
    for(int i =0; i<n; i++)
        if(s[i]!=' ')
            ans++;
    cout<<ans;
    return 0;
}
