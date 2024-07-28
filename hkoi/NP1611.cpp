#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("toy.in", "r", stdin);
    freopen("toy.out", "w", stdout);
    long long dir[100001], an, n, dct = 0, move, cur = 0;
    string a[100001];
    cin >> an >> n;
    for(int i =0; i<an; i++) cin >> dir[i] >> a[i];
    for(int i =0; i<n; i++) {
        cin >> dct >> move;
        if(dir[cur]==0){
            if(dct==0) cur-=move;
            else if(dct==1) cur+=move;
        }else if(dir[cur]==1){
            if(dct==0) cur+=move;
            else if(dct==1) cur-=move;
        }
        if(cur<=0) cur+=an;
        if(cur>=an) cur-=an;
    }
    cout << a[cur];
    return 0;
}
