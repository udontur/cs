#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m, c, t[100001], ans=0, cur=0;
    cin >> n >> m >> c;
    for(int i =1; i<=n; i++) cin >> t[i];
    for(int i =1, l, r; i<=n; i++){
        long long tmp;
        cin >> l >> r;
        if(l<=c&&c<=r) tmp=0;
        else tmp=min(abs(l-c), abs(r-c));
        cur+=t[i]-tmp;
        if(cur<0){
            cout << "No\n";
            return 0;
        }
        ans+=tmp;
    }
    cout << "Yes\n" << ans << "\n";
    return 0;
}
