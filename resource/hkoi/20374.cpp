#include <bits/stdc++.h>
using namespace std;
long long fpow(long long a, long long b, long long mod){
    if(!b) return 1;
    long long res=fpow(a, b/2, mod);
    if(b%2) return ((res%mod)*(res%mod)*(a%mod))%mod;
    else return ((res%mod)*(res%mod))%mod;
}
int main () {
    int b, p, m;
    cin >> b >> p >> m;
    cout << fpow(b, p, m);
    return 0;
}
