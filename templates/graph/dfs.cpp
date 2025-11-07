vector<int> adj[]
vector<bool> vis()

void dfs(int v){
    vis[v]=1;
    for(int u: adj[v])
        if(!vis[u])
            dfs(u);
    return;
}
