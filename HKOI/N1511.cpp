#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, x[100001], y[100001], e[100001], brk=0;
unordered_map <ll, ll> a;
ll fnd(ll u) {
    if (!a.count(u)) a[u] = u;
    return a[u]==u?u:a[u]=fnd(a[u]);
}
void un(ll u, ll v) {a[fnd(u)]=fnd(v);}
int main() {
    cin >> t;
    while(t--){
        brk=0;
        cin >> n;
        a.clear();
        for(ll i =0; i<n; i++) cin >> x[i] >> y[i] >> e[i];
        for(ll i =0; i<n; i++){
            if(e[i]) un(x[i], y[i]);
        }
        for(ll i=0; i<n; i++){
            if(!e[i]){
                if(fnd(x[i])==fnd(y[i])){
                    cout << "NO" << endl;
                    brk=1;
                    break;
                }
            }
        }
        if(!brk) cout << "YES" << endl;
    }
    return 0;
}
