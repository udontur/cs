#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    freopen("count.in", "r", stdin);
    freopen("count.out", "w", stdout);
    int n, ans=0, t, c[10001]{0}, a[10001]{0};
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>a[i];
        c[a[i]]=1;
    }
    for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            t=a[i]+a[j];
            if(c[t]==1){
                ans++;
                c[t]=2;
            }
        }
    }
    cout<<ans;
    return 0;
}
