#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<int> adj[], int str, int fnd){
    queue<int> q;
    vector<bool> used(10001);
    vector<int> d(10001), p(10001);
    q.push(str);
    used[str]=1;
    p[str]=-1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int u: adj[v]){
            if(!used[u]){
                used[u]=1;
                q.push(u);
                d[u]=d[v]+1;
                p[u]=v;
            }
        }
    }
    vector<int> path;
    for(int v =fnd; v!=-1; v=p[v]) path.push_back(v);
    reverse(path.begin(), path.end());
    return path;
}
bool cmpexp(pair<int, int> a, pair<int, int> b){
    if(a.first<b.first) return 1;
    else if(a.first==b.first)
        if(a.second<b.second) return 1;
    return 0;
}
using namespace std;
int main() {
    int p, q;
    cin>>p>>q;
    pair<int, int> exp[1001];
    for(int i =0; i<q; i++) cin>>exp[i].first>>exp[i].second;
    sort(exp, exp+q, cmpexp);
    vector<int> adj[10001];
    int lk[101][101];
    int ptr=1;
    for(int i =1; i<=p; i++)
        for(int j =1; j<=p; j++)
            lk[i][j]=ptr++;
    ptr=0;
    int grid[101][101]{1};
    for(int i =0; i<p; i++)
        for(int j =0; j<p; j++)
            grid[i][j]=1;
    ptr=0;
    for(int i =1; i<=p; i++){
        for(int j =1; j<=p; j++){
            if(i==exp[ptr].first&&j==exp[ptr].second&&ptr<q){
                ptr++;
                grid[i][j]=1;
                continue;
            }else grid[i][j]=0;
        }
    }
    for(int i =1; i<=p; i++){
        for(int j =1; j<=p; j++){
            if(grid[i][j]) continue;
            if(!grid[i-1][j]) adj[lk[i][j]].push_back(lk[i-1][j]);
            if(!grid[i][j+1]) adj[lk[i][j]].push_back(lk[i][j+1]);
            if(!grid[i+1][j]) adj[lk[i][j]].push_back(lk[i+1][j]);
            if(!grid[i][j-1]) adj[lk[i][j]].push_back(lk[i][j-1]);
        }
    }
    vector<int> path=bfs(adj, 1, p*p);
    cout<<path.size()-1<<"\n";
    for(int i =1; i<path.size(); i++){
        if(path[i-1]+1==path[i]) cout<<"E\n";
        else if(path[i-1]-1==path[i]) cout<<"W\n";
        else if(path[i-1]+p==path[i]) cout<<"S\n";
        else cout<<"N\n";
    }
    return 0;
}
