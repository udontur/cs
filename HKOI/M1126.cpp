#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int n, x[100001], y[100001], xc[100001], yc[100001], xo[100001], yo[100001];
    x[0]=0, y[0]=0, xc[0]=0, yc[0]=0, xo[0]=0, yo[0]=0;
    cin>>n;
    for(int i =1; i<=n; i++){
        cin>>x[i]>>y[i];
        xc[i]=xc[i-1]+x[i];
        yc[i]=yc[i-1]+y[i];
        xo[i]=xo[i-1]+(x[i]*x[i]);
        yo[i]=yo[i-1]+(y[i]*y[i]);
    }
    int ans=0;
    for(int i =1; i<n; i++){
        ans+=(n-i)*x[i]*x[i]-2*x[i]*(xc[n]-xc[i])+(xo[n]-xo[i]);
        ans+=(n-i)*y[i]*y[i]-2*y[i]*(yc[n]-yc[i])+(yo[n]-yo[i]);
    }
    cout<<ans<<"\n";
    return 0;
}

