#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
char a[30][30];
bool vis[30][30]{0};
bool par[30][30];
void dfs(int i, int j, bool dir){
    if(vis[i][j]) return;
    par[i][j]=dir;
    vis[i][j]=1;
    if(a[i+1][j]=='.'&&!vis[i+1][j]) dfs(i+1, j, 1); //S
    if(a[i][j+1]=='.'&&!vis[i][j+1]) dfs(i, j+1, 0); //E
    return;
}
int main() {
    int n, m;
    cin>>n>>m;
    for(int i =0; i<=m+1; i++) a[0][i]='#';
    for(int i =0; i<=m+1; i++) a[n+1][i]='#';
    for(int i =0; i<=n+1; i++) a[i][0]='#';
    for(int i =0; i<=n+1; i++) a[i][m+1]='#';
    for(int i =1; i<=n; i++)
        for(int j =1; j<=m; j++)
            cin>>a[i][j];
    if(a[2][1]=='.') dfs(2, 1, 1); //S
    if(a[1][2]=='.') dfs(1, 2, 0); //E
    int pi=n, pj=m;
    vector<bool> pre;
    while(1){
        if(pi==1&&pj==1) break;
        bool dir=par[pi][pj];
        pre.push_back(dir);
        if(dir) pi--;
        else pj--;
    }
    reverse(pre.begin(), pre.end());
    for(auto i: pre){
        if(i) cout<<'S';
        else cout<<'E';
    }
    return 0;
}
