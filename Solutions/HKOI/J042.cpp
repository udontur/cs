#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double a[10001]{0.0}, ans=0;
    cin>>n>>ans;
    for(int i =0; i<n; i++) cin>>a[i];
    for(int i =1; i<n; i++)
        if(a[i-1]>a[i])
            ans=ans/a[i]*a[i-1];
    ceil(ans);
    cout<<fixed<<setprecision(2);
    cout<<ans;
    return 0;
}
