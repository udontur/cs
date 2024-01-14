#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("road.in", "r", stdin);
    freopen("road.out", "w", stdout);
    int n, ans=0, mx=0, a[100001];
    cin >> n;
    for(int i =0; i<n; i++)
        cin >> a[i];
    for(int i =0; i<n;i++){
        if(a[i]>mx) ans+=a[i]-mx;
        mx=a[i];
    }
    cout << ans;
    return 0;
}
