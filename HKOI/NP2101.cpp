#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("candy.in", "r", stdin);
    freopen("candy.out", "w", stdout);
    int n, l, r;
    cin >> n >> l >> r;
    if(l+n-1-l%n<=r) cout << n-1;
    else cout << r%n;
    return 0;
}
