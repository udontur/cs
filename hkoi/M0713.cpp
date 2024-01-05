#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, a[5000001], ans=0;
    cin>>n;
    for(int i =0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    if(!(n%2)){
        ans=a[n/2]+a[n/2+1];
        ans=ans/2;
        cout<<ans;
    }else cout<<a[n/2];
    return 0;
}
