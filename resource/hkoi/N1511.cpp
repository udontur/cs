#include <bits/stdc++.h>
#define int long long
using namespace std;
int t, n, x[100001], y[100001], e[100001], bye=0;
unordered_map <int, int> a;
int fnd(int u) {
    if (!a.count(u)) a[u] = u;
    return a[u]==u?u:a[u]=fnd(a[u]);
}
void un(int u, int v) {a[fnd(u)]=fnd(v);}
int32_t main() {
    cin >> t;
    while(t--){
        bye=0;
        cin >> n;
        a.clear();
        for(int i =0; i<n; i++) cin >> x[i] >> y[i] >> e[i];
        for(int i =0; i<n; i++){
            if(e[i]) un(x[i], y[i]);
        }
        for(int i=0; i<n; i++){
            if(!e[i]){
                if(fnd(x[i])==fnd(y[i])){
                    cout << "NO\n";
                    bye=1;
                    break;
                }
            }
        }
        if(!bye) cout << "YES\n";
    }
    return 0;
}
