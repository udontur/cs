//WHAT https://math.stackexchange.com/questions/3126495/prove-that-any-number-that-is-not-a-power-of-2-can-be-expressed-as-a-sum-of-two
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin>>tt;
    while(tt--){
        int k;
        cin>>k;
        if(k&(k-1)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
