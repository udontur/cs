#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("live.in", "r", stdin);
    freopen("live.out", "w", stdout);
    int n, m, x, cnt[601];
    for(int i =0; i<601; i++) cnt[i]=0;
    cin >> n >> m;
    for(int i =0; i<n; i++){
        cin >> x;
        cnt[x]++;
        int t=0;
        for(int j =600; j>=0; j--){
            t+=cnt[j];
            if(t>=max(1, (i+1)*m/100)){
                cout << j << " ";
                break;
            }
        }
    }
    return 0;
}
