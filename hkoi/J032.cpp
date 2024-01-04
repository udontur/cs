#include <bits/stdc++.h>
using namespace std;
int main(){
    int p, q, n, r, x, y, k, maxx=1, maxy=1, rev=0, cur;
    vector<pair<pair<int,int>,int>>v(1001);
    cin >> p >> q >> n >> r;
    for(int  i=0; i<n; i++){
        cin >> x >> y >> k;
        v[i].first.first=x;
        v[i].first.second=y;
        v[i].second=k;
    }
    for(int x=1; x<=p; x++){
        for(int y=1; y<=q; y++){
            cur=0;
            for(int i =0; i<n; i++)
                if(abs(v[i].first.first-x)+abs(v[i].first.second-y)<=r)
                    cur+=v[i].second;
            if(cur>rev){
                maxx=x;
                maxy=y;
                rev=cur;
            }
        }
    }
    cout << maxx << " " << maxy << " " << rev;
    return 0;
}
