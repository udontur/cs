#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, n, y1[100001], x1[100001], x2[100001], ans=0;
    cin >> y >> x >> n;
    for(int i =n-1; i>=0; i--) cin >> y1[i] >> x1[i] >> x2[i];
    for(int i =0; i<n; i++){
        if(y1[i]>y) continue;
        if((x>=x1[i]&&x<=x2[i])||(x>=x2[i]&&x<=x1[i])){
            x=x2[i];
            y=y1[i];
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
