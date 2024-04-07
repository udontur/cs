#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n, mx, ans=0, cnt=1,cur =0;
    int arr[100002]{0}, par[100002]{0};
    cin >> n >> mx;
    for(int i =1 ;i<=n; i++) cin >> arr[i];
    for(int i =1; i<=n; i++) par[i]=par[i-1]+arr[i];
    for(int i =1; i<=mx; i++){
        cur+=arr[i]*cnt;
        cnt++;
    }
    ans=cur;
    for(int i =1; i<=n-mx; i++){
        cur-=par[mx+i-1]-par[i-1]; 
        cur+=arr[mx+i]*mx;
        ans=max(ans,cur);
    }
    cout << ans;
    return 0;  
}
