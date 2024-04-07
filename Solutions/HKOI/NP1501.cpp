#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("coin.in", "r", stdin);
    freopen("coin.out", "w", stdout);
    int k;
    cin>>k;
    int d=0, day=1, ans=0;
    while(d<k){
        ans+=day*day;
        d+=day;
        day++;
    }
    ans-=(day-1)*(d-k);
    cout<<ans;
}
