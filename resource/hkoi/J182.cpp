#include <bits/stdc++.h>
using namespace std;
int main() {
    int r, c, n, x, y, ptr=0;
    vector<pair<int, int>> a[100001];
    bool grid[301][301]{0};
    cin>>r>>c>>n;
    for(int i =0; i<n; i++){
        cin>>x>>y;
        grid[x-1][y-1]=1;
    }
    for(int i =0; i<r; i++){
        for(int j =0; j<c; j++){
            if(grid[i][j]&&!a[ptr].empty()) ptr++;
            else if(!grid[i][j]) a[ptr].push_back(make_pair(i+1, j+1));
        }
        i++;
        if(i==r) break;
        for(int j =c-1; j>=0; j--){
            if(grid[i][j]&&!a[ptr].empty()) ptr++;
            else if(!grid[i][j]) a[ptr].push_back(make_pair(i+1, j+1));    
        }
    }
    int out=0;
    for(int i =0; i<ptr+1; i++)
        if(a[i].size()>=1)
            out++;
    cout<<out<<"\n";
    if(out>=1){
        for(int i =0; i<out; i++){
            cout<<a[i].size()<<"\n";
            for(auto j: a[i]) cout<<j.first<<" "<<j.second<<"\n";
        }
    }
    return 0;
}
