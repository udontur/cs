#include <bits/stdc++.h>
using namespace std;
int mx, my, h, x, y, a[1001][1001];
bool vis[1001][1001]{false}, ans[1001][1001]{false};
void dfs(int i, int j){
    vis[i][j]=true;
    ans[i][j]=true;
    if((i>=0&&j+1>=0&&i<mx&&j+1<my)&&!vis[i][j+1]&&abs(a[i][j]-a[i][j+1])<=h) dfs(i, j+1);
    if((i>=0&&j-1>=0&&i<mx&&j-1<my)&&!vis[i][j-1]&&abs(a[i][j]-a[i][j-1])<=h) dfs(i, j-1);
    if((i+1>=0&&j>=0&&i+1<mx&&j<my)&&!vis[i+1][j]&&abs(a[i][j]-a[i+1][j])<=h) dfs(i+1, j);
    if((i-1>=0&&j>=0&&i-1<mx&&j<my)&&!vis[i-1][j]&&abs(a[i][j]-a[i-1][j])<=h) dfs(i-1, j);
}
int main (){
    cin >> mx >> my >> h >> x >> y;
    for(int i =0; i<my; i++){
        for(int j=0; j<mx; j++){
            cin >> a[i][j];
        }
    }
    dfs(y-1, x-1);
    for(int i =0; i<my; i++){
        for(int j=0; j<mx; j++){
            if(ans[i][j]) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }
    return 0;
}
