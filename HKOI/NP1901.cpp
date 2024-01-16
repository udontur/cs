#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    int ans=0;
    char c;
    for(int i =0; i<8; i++){
        cin>>c;
        if(c=='1') ans++;
    }
    cout<<ans;
    return 0;
}
