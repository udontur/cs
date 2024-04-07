#include <bits/stdc++.h>
using namespace std;
int bs(int arr[], int l, int r, int x){
    while(l<=r) {
        int m=l+(r-l)/2;
        if (arr[m]==x) return m;
        if (arr[m]<x) l=m+1;
        else r=m-1;
    }
    return -1;
}
int main (){
    int n, q, x, a[100001];
    cin >> n >> q;
    for(int i =0; i<n; i++) cin >> a[i];
    for(int i =0; i<q; i++){
        cin >> x;
        int tar=bs(a, 0, n, x);
        if(tar==-1) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}
