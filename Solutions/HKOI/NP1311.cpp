#include <bits/stdc++.h>
#define int long long
using namespace std;
int fpow(int a, int b, int n){
    if(!b) return 1;
    int res=fpow(a, b/2, n);
    if(b%2) return ((res%n)*(res%n)*(a%n))%n;
    else return ((res%n)*(res%n))%n;
}
int32_t main(){
    freopen("circle.in", "r", stdin);
    freopen("circle.out", "w", stdout);
    int n, m, k, x;
    cin >> n >> m >> k >> x;
    cout << (x+fpow(10, k, n)*m)%n << "\n";
    return 0;
}
