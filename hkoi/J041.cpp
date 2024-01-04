#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, r, s, ans=1;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>r>>s;
        ans=lcm(ans, r+s);
    }
    cout<<ans;
    return 0;
}
