#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, c, a, b, st;
    queue <int> q;
    vector <int> adj[100001], dis(100001, 1000000000);
    vector <bool> vis(100001, 0);
    cin >> n >> m>> c;
    for(int i =0; i<m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dis[1]=0;
    q.push(1);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(vis[u]) continue;
        vis[u]=1;
        for(int v: adj[u]){
            if(dis[v]>dis[u]+1){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
    if(!vis[n]){
        cout << "-1\n";
        return 0;
    }
    if(dis[n]>c) cout << dis[n]-c << "\n";
    else cout << "0\n";
    return 0;
}
