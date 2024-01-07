#include <iostream>
#include <vector>
using namespace std;

void dfs(int v, vector<int> adj[], vector<int>& vis){
    vis[v]=1;
    for(int u: adj[v])
        if(!vis[u])
            dfs(u, adj, vis);
    return;
}
