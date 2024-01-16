#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n, m;
    cin>>n>>m;
    int a[100001]{0};
    for(int i =0; i<m; i++){
        int d, x, y;
        cin>>d>>x>>y;
        a[x]+=d;
        a[y+1]-=d;
    }
    int ans=0;
    for(int i =1; i<=n; i++){
        ans+=a[i];
        cout<<ans<<"\n";
    }
    return 0;
}
