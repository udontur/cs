#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000001], seg[4000001], x, y;
void build(int v, int l, int r){
    if(l==r) seg[v]=a[l];
    else{
        int mid=(l+r)/2;
        build(2*v, l, mid);
        build(2*v+1, mid+1, r);
        seg[v]=max(seg[2*v], seg[2*v+1]);
    }
}
int query(int v, int tl, int tr, int l, int r){
    if(tr<l||tl>r) return 0;
    if(l<=tl&&tr<=r) return seg[v];
    int tm=(tl+tr)/2;
    return max(query(2*v, tl, tm, l, r), query(2*v+1, tm+1, tr, l, r));
}
int main (){
    cin >> n >> m;
    for(int i =0; i<n; i++) cin >> a[i];
    build(1, 0, n-1);
    for(int i =0; i<m; i++){
        cin >> x >> y;
        x--, y--;
        cout << query(1, 0, n-1, x, y) << "\n";
    }
    return 0;
}
