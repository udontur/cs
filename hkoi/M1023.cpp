#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, a[100001];
    cin>>n>>k;
    for(int i =0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    int l=0, r=a[n-1]-a[0];
    while(l<r){
        int m=(l+r+1)/2, o=1, pre=a[0];
        for(int i =1; i<n; i++)
            if(a[i]-pre>=m)
                pre=a[i], o++;
        if(o>=k) l=m;
        else r=m-1;
    }
    cout<<l;
    return 0;
}
