#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    freopen("pow.in", "r", stdin);
    freopen("pow.out", "w", stdout);
    int a, b, num=1;
    cin>>a>>b;
    if(a==1){
        cout<<"1";
        return 0;
    }
    for(int i =1; i<=b; i++){
        num*=a;
        if(num>1e9){
            cout<<"-1";
            return 0;
        }
    }
    cout<<num;
    return 0;
}
