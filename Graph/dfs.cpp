void dfs(vector<int> adj[], int v, vector<int>& vis){
    vis[v]=1;
    for(int u: adj[v])
        if(!vis[u])
            dfs(adj, u, vis);
    return;
}
