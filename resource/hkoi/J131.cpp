#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, cnt[10001], ans[10001]{0},  tol=0, mx=0, val=0;
    cin >> n >> m;
    while(1){
        int c1=0, c2=0, c3=0;
        for(int i=0; i<m; i++) cin >> cnt[i];
        for(int i=0; i<m; i++){
            if(cnt[i]==1) c1++;
            if(cnt[i]==3) c2++;
            if(cnt[i]==5) c3++;
        }
        if(c1==1)
            for(int i=0; i<m; i++)
                if(cnt[i]==1){
                    ans[i]++;
                    if(mx<ans[i]) mx=ans[i];
                }
        if(c2==1)
            for(int i=0; i<m; i++)
                if(cnt[i]==3){
                    ans[i] += 3;
                    if(mx<ans[i]) mx=ans[i];
                }
        if(c3==1)
            for(int i=0; i<m; i++)
                if(cnt[i]==5) {
                    ans[i]+=5;
                    if(mx<ans[i]) mx=ans[i];
                }
        tol++;
        if(mx >= n) break;
    }
    cout << tol << "\n";
    for (int i=0; i<m; i++) {
        if(ans[i]>n) cout << n << " ";
        else cout << ans[i] << " ";
    }
    return 0;
}
