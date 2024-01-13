#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    freopen("ratio.in", "r", stdin);
    freopen("ratio.out", "w", stdout);
    int a, b, l, ap, bp=1;
    cin >> a >> b >> l;
    ap=l;
    for(int i =1; i<=l; i++){
        for(int j =0; j<=l; j++){
            if(gcd(i,j)==1&&i*b>=j*a&&i*bp<j*ap){
                ap=i;
                bp=j;
            }
        }
    }
    cout << ap << " " << bp;
    return 0;
}
