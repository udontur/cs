#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, x2=0, rnd, ans[100001]={1}, cnt=1;
    cin >> n;
    for(int i =1; i < n+1; i++){
        x=0;
        for(int j =0; j < x2+1; j++){
            rnd=ans[j]*i+x;
            x=rnd/10;
            ans[j]=rnd % 10;
        }
        while(x>0){
            x2++;
            ans[x2]=x%10;
            x/=10;
            cnt++;
        }
    }
    reverse(ans, ans+cnt);
    for (int i =0; i<cnt; i++) cout << ans[i];
    return 0;
}
