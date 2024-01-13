#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    freopen("block.in", "r", stdin);
    freopen("block.out", "w", stdout);
    int n, a[750001]{0};
    cin>>n;
    for(int i =0; i<n; i++) cin>>a[i];
    int ans=a[0];
    for(int i =0; i<n-1; i++)
        if(a[i]<a[i+1])
            ans+=a[i+1]-a[i];
    cout<<ans;
    return 0;
}
