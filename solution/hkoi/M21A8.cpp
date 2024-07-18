#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int a, b, c, d, ans=0;
        cin>>a>>b>>c>>d;
        if(a==c) ans++;
        if(b==d) ans++;
        cout<<ans<<"\n";
    }
    return 0;
}
