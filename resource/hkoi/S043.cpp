#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, a[100001]{0};
    double mad=0.0, e[100001]{0.0},c[100001]{0};
    cin >> n >>k;
    for(int i =1; i<=n; i++) cin >> a[i];
    for(int i =1; i<=n; i++) c[i]=c[i-1]+a[i];
    for(int i =k+1; i<=n; i++)
        mad+=(double)abs(((double)(c[i-1]-c[i-k-1])/k)-(double)a[i]);
    mad/=(n-k);
    cout << fixed << setprecision(2) << mad;
    return 0;
}
