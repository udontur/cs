#include <bits/stdc++.h>
using namespace std;
int n, r, u, v;
bool vis[100001];
vector <int> adj[100001];
void dfs(int no){
    vis[no]=1;
    sort(adj[no].begin(), adj[no].end());
    for(int c: adj[no]){
        if(!vis[c]){
            dfs(c);
        }
    }
    cout << no << " ";
}
int main() {
    cin >> n >> r;
    for(int i =0; i<n; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(r);
    return 0;
}
