#include <bits/stdc++.h>
#define int long long
using namespace std;
int c[1000001], p[1000001], f[1000001], n, k, u[1000001], t=0;
bool cmp(int x, int y){return c[x]+1.0*c[y]/p[x]<c[y]+1.0*c[x]/p[y];}
signed main() {
    cin >> n >> k;
    for(int i =0; i<n; i++) f[i]=i;
    for(int i =0; i<n; i++) cin >> c[i] >> p[i];
    for(int i =0; i<n; i++)
        if(c[i]+1.0*k/p[i]<k)
            u[i]=1, t++;
    sort(f, f+n, cmp);
    cout << t << "\n";
    for(int i =0; i<n; i++)
        if(u[f[i]])
            cout << f[i]+1 << " ";
    return 0;
}
