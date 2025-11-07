#include <bits/stdc++.h>
using namespace std;
int main() {
    int v=0, n=0, ans=0, p=0;
    cin >> v >> n;
    for (int i =0; i<n; i++) {
        cin >> p;
        v-=p;
        if(v<=0){
            ans++;
            v+=250;
        }
    }
    ans*=250;
    cout << "$" << ans;
    return 0;
}
