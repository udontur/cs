#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, chk, ans=0, ans2=0;
    cin >> n >> k;
    cin >> chk;
    ans = chk;
    ans2=k-chk;
    for(int i =0; i<n-1; i++){
        cin >> chk;
        if(k-chk>=0&&k-chk<=ans2){
            ans=chk;
            ans2=k-chk;
        }else if(k-chk<0&&chk-k<=ans2){
            ans=chk;
            ans2=chk-k;
        }
        chk=0;
    }
    cout << ans;
    return 0;
}
