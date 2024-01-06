#include <iostream>
using namespace std;

int seg[1000001], a[1000001];
int cmp(int a, int b){
    /*
    return a+b;
    return max(a, b);
    return min(a, b);
    */
} 
void build(int v, int l, int r){
    if(l==r){
        seg[v]=a[l];
        return;
    }
    int mid=(l+r)/2;
    build(2*v, l, mid);
    build(2*v+1, mid+1, r);
    seg[v]=cmp(seg[2*v], seg[2*v+1]);
}
void update(int v, int tl, int tr, int idx, int val){
    if(tl==tr){
        seg[v]=val;
        return;
    }
    int mid=(tl+tr)/2;
    if(idx<=mid) update(2*v, tl, mid, idx, val);
    else update(2*v+1, mid+1, tr, idx, val);
    seg[v]=cmp(seg[2*v], seg[2*v+1]);
}
int query(int v, int tl, int tr, int l, int r){
    if(tl>r||tr<l) return 0;
    if(tl>=l&&tr<=r) return seg[v];
    int mid=(tl+tr)/2;
    return cmp(query(2*v, tl, mid, l, r), query(2*v+1, mid+1, tr, l, r));
}
int main() {
    int n;
    cin >> n;
    for(int i =0; i<n; i++) cin >> a[i];
    build(1, 0, n-1);
    /*
    query(1, 0, n - 1, left position, right position);
    update(1, 0, n - 1, the position, new value);
    */
    return 0;
}
