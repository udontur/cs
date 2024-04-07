#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("librarian.in", "r", stdin);
    freopen("librarian.out", "w", stdout);
    int bn, n, len, bkx[1001], pos=0, t=0, bklen, num;
    string bk[1001], end, ans, bkstr;
    bool check[1001]{0};
    cin >> bn >> n;
    for(int i =0; i<bn; i++){
        cin >> bkx[i];
    }
    sort(bkx, bkx+bn);
    for(int i =0; i<bn; i++){
        bk[i]=to_string(bkx[i]);
    }
    for(int i =0; i<n; i++){
        t=0;
        ans="";
        cin >> len >> end;
        for(int j =0; j<bn; j++){
            bklen=bk[j].length();
            pos=0;
            pos=bklen-len;
            if(pos<0) continue;
            bkstr=bk[j].substr(pos, len);
            if(bkstr==end){
                ans=bk[j];
                t=1;
                break;
            }
        }
        if(t==1) cout << ans<<"\n";
        else if(t==0) cout << "-1\n";
    }
    return 0;
}
