vector<int> adj[]

int bfs(int str, int end){
    queue<int> q;
    vector<bool> vis();
    vector<int> dis(), par();
    q.push(str);
    vis[str]=1;
    par[str]=-1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int u: adj[v]){
            if(!vis[u]){
                vis[u]=1;
                q.push(u);
                dis[u]=dis[v]+1;
                par[u]=v;
            }
        }
    }
    return dis[end];
    /*
    vector<int> path;
    for(int v =end; v!=-1; v=par[v]) path.push_back(v);
    reverse(path.begin(), path.end());
    return path;
    */
}
