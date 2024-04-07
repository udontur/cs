#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a[100001], l=1, f[100001]{0}, o=0, mx=0;
    cin >> n >> m;
    for(int i =1; i<=n; i++) cin >> a[i];
    if(m>n) m=n;
    for(int r=1; r<=n; r++){
        f[a[r]]++;
        if(f[a[r]]==1) o++;
        if(r>=m+1){
            f[a[l]]--;
            if(f[a[l]]==0) o--;
            l++;
        }
        mx=max(o, mx);
    }
    cout << mx;
    return 0;
}
