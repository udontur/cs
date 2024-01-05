#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, r=1, x, y, ans=INT_MAX, m, a[1000001], f[1000001]{0}, o=0;
    cin >> n >> m;
    for(int i =1; i<=n; i++){
        cin >> a[i];
    }
    f[a[1]]++;
    o++;
    for(int l =1; l<=n; l++){
        f[a[l-1]]--;
        if(f[a[l-1]]==0) o--;
        while(o<m&&r<n){
            r++;
            f[a[r]]++;
            if(f[a[r]]==1) o++;
        }
        if(o==m&&r-l+1<ans){
            ans = r-l+1;
            x=l;
            y=r;
        }
    }
    cout << x << " " << y;
    return 0;
} 
