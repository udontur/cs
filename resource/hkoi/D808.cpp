#include <bits/stdc++.h>
using namespace std;
int n, p, a[100001], ans=0; 
void recur(int l, int r){
    ans+=r-l+1;
    if(l>=r) return;
    int o=l;
    p=a[r];
    for(int i =l; i<r; i++)
        if(a[i]<=p)
            swap(a[i], a[o]), o++;
    swap(a[r], a[o]);
    recur(l, o-1);
    recur(o+1, r);
}
int main() {
    cin >> n;
    for(int i =0; i<n; i++) cin >> a[i];
    recur(0, n-1);
    for(int i =0; i<n; i++) cout << a[i] << " ";
    cout << "\n" << ans;
    return 0;
}
