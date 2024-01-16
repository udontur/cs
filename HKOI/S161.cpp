#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int n, k, r, c, maxv=0, x, y, f[4001][4001]={0};
    string s;
    cin >> n >> k >> r >> c >> s;              
    x=y=k;
    for(int i =0, o=0; i<k*k;i++) {
        if(s[o]=='U'){ 
            x--;
            r--;
        }else if(s[o]=='D'){
            x++;
            r++;
        }else if(s[o]=='L'){
            y--;
            c--;
        }else if(s[o]=='R'){
            y++;
            c++;
        } 
        if(r<1||r>n||c<1||c>n) break;
        if(x>=0&&y>=0&&x<=4000&&y<=4000){
            f[x][y]++;         
            maxv=max(maxv, f[x][y]);
        }
        o++;
        o%=k;
    }
    cout << maxv;
    return 0;
}
