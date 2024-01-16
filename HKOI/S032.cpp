#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, c, arr[1001]{0}, d[1001]{0}, maxv=0, q=0;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> a >> b >> c;
        d[b]+=a;
        d[c+1]-=a;
        q=max(q, c);
    }
    for(int i =1; i<=q; i++){
        arr[i]=arr[i-1]+d[i];
        maxv=max(maxv, arr[i]);
    }
    cout << maxv << endl;
    return 0;
}
