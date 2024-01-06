#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int bfs(vector<int> adj[], int str, int fnd){
    int par[1001];
    vector<int> dis(1001, 1e9);
    vector<bool> vis(1001, 0);
    queue<int> q;
    dis[str]=0, par[str]=-1;
    q.push(str);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(vis[u]) continue;
        vis[u]=1;
        for(int v: adj[u]){
            if(dis[v]>dis[u]+1){
                dis[v]=dis[u]+1;
                par[v]=u;
                q.push(v);
            }
        }
    }
    return dis[fnd];
    /*
    int cur=fnd;
    vector<int> path;
    while(cur!=-1){
        path.push_back(cur);
        cur=par[cur];
    }
    reverse(path.begin(), path.end());
    return path;
    */
}
