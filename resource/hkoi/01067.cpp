#include <bits/stdc++.h>
using namespace std;
int conv(char con);
bool up(int val);
bool down(int val);
bool right(int val);
bool left(int val);
vector<int> bfs(vector<int> adj[], int str, int fnd);
int main(){
    int n, mp[11][11], look[11][11], end;
    pair<int, int> rev[101];
    char con;
    vector<int> adj[1001];
    cin >> n;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cin >> con;
            mp[i][j]=conv(con);
        }
    }
    int ptr=1;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            look[i][j]=ptr;
            rev[ptr].first=i;
            rev[ptr].second=j;
            ptr++;
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i==0&&j==0){
                if(down(mp[i][j])&&up(mp[i+1][j])) adj[look[i][j]].push_back(look[i+1][j]);
                if(right(mp[i][j])&&left(mp[i][j+1])) adj[look[i][j]].push_back(look[i][j+1]);
            }else if(i==0&&j==n-1){
                if(down(mp[i][j])&&up(mp[i+1][j])) adj[look[i][j]].push_back(look[i+1][j]);
                if(left(mp[i][j])&&right(mp[i][j-1])) adj[look[i][j]].push_back(look[i][j-1]);
                if(up(mp[i][j])) end=look[i][j];
                if(right(mp[i][j])) end=look[i][j];
            }else if(i==n-1&&j==0){
                if(up(mp[i][j])&&down(mp[i-1][j])) adj[look[i][j]].push_back(look[i-1][j]);
                if(right(mp[i][j])&&left(mp[i][j+1])) adj[look[i][j]].push_back(look[i][j+1]);
                if(down(mp[i][j])) end=look[i][j];
                if(left(mp[i][j])) end=look[i][j];
            }else if(i==n-1&&j==n-1){
                if(up(mp[i][j])&&down(mp[i-1][j])) adj[look[i][j]].push_back(look[i-1][j]);
                if(left(mp[i][j])&&right(mp[i][j-1])) adj[look[i][j]].push_back(look[i][j-1]);
                if(down(mp[i][j])) end=look[i][j];
                if(right(mp[i][j])) end=look[i][j];
            }else if(i==0){
                if(down(mp[i][j])&&up(mp[i+1][j])) adj[look[i][j]].push_back(look[i+1][j]);
                if(left(mp[i][j])&&right(mp[i][j-1])) adj[look[i][j]].push_back(look[i][j-1]);
                if(right(mp[i][j])&&left(mp[i][j+1])) adj[look[i][j]].push_back(look[i][j+1]);
                if(up(mp[i][j])) end=look[i][j];
            }else if(j==0){
                if(up(mp[i][j])&&down(mp[i-1][j])) adj[look[i][j]].push_back(look[i-1][j]);
                if(down(mp[i][j])&&up(mp[i+1][j])) adj[look[i][j]].push_back(look[i+1][j]);
                if(right(mp[i][j])&&left(mp[i][j+1])) adj[look[i][j]].push_back(look[i][j+1]);
                if(left(mp[i][j])) end=look[i][j];
            }else if(i==n-1){
                if(up(mp[i][j])&&down(mp[i-1][j])) adj[look[i][j]].push_back(look[i-1][j]);
                if(left(mp[i][j])&&right(mp[i][j-1])) adj[look[i][j]].push_back(look[i][j-1]);
                if(right(mp[i][j])&&left(mp[i][j+1])) adj[look[i][j]].push_back(look[i][j+1]);
                if(down(mp[i][j])) end=look[i][j];
            }else if(j==n-1){
                if(up(mp[i][j])&&down(mp[i-1][j])) adj[look[i][j]].push_back(look[i-1][j]);
                if(down(mp[i][j])&&up(mp[i+1][j])) adj[look[i][j]].push_back(look[i+1][j]);
                if(left(mp[i][j])&&right(mp[i][j-1])) adj[look[i][j]].push_back(look[i][j-1]);
                if(right(mp[i][j])) end=look[i][j];
            }else{
                if(up(mp[i][j])&&down(mp[i-1][j])) adj[look[i][j]].push_back(look[i-1][j]);
                if(down(mp[i][j])&&up(mp[i+1][j])) adj[look[i][j]].push_back(look[i+1][j]);
                if(left(mp[i][j])&&right(mp[i][j-1])) adj[look[i][j]].push_back(look[i][j-1]);
                if(right(mp[i][j])&&left(mp[i][j+1])) adj[look[i][j]].push_back(look[i][j+1]);
            }
        }
    }
    vector<int> path=bfs(adj, 1, end);
    int k=path.size();
    char out[11][11];
    for(int i =0; i<n; i++)
        for(int j =0; j<n; j++)
            out[i][j]='.';
    for(int i =0; i<k; i++) out[rev[path[i]].first][rev[path[i]].second]='*';
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cout << out[i][j];
        }
        cout << "\n";
    }
    return 0;
}
int conv(char con){
    if(isdigit(con)) return (con-'0');   
    else return (con-'A'+10);
}
bool up(int val){
    if(val==0) return 1;
    if(val==1) return 1;
    if(val==2) return 1;
    if(val==3) return 1;
    if(val==4) return 1;
    if(val==5) return 1;
    if(val==6) return 1;
    if(val==7) return 1;
    if(val==8) return 0;
    if(val==9) return 0;
    if(val==10) return 0;
    if(val==11) return 0;
    if(val==12) return 0;
    if(val==13) return 0;
    if(val==14) return 0;
    return 0;
}
bool down(int val){
    if(val==0) return 1;
    if(val==1) return 1;
    if(val==2) return 0;
    if(val==3) return 0;
    if(val==4) return 1;
    if(val==5) return 1;
    if(val==6) return 0;
    if(val==7) return 0;
    if(val==8) return 1;
    if(val==9) return 1;
    if(val==10) return 0;
    if(val==11) return 0;
    if(val==12) return 1;
    if(val==13) return 1;
    if(val==14) return 0;
    return 0;
}
bool right(int val){
    if(val==0) return 1;
    if(val==1) return 1;
    if(val==2) return 1;
    if(val==3) return 1;
    if(val==4) return 0;
    if(val==5) return 0;
    if(val==6) return 0;
    if(val==7) return 0;
    if(val==8) return 1;
    if(val==9) return 1;
    if(val==10) return 1;
    if(val==11) return 1;
    if(val==12) return 0;
    if(val==13) return 0;
    if(val==14) return 0;
    return 0;
}
bool left(int val){
    if(val==0) return 1;
    if(val==1) return 0;
    if(val==2) return 1;
    if(val==3) return 0;
    if(val==4) return 1;
    if(val==5) return 0;
    if(val==6) return 1;
    if(val==7) return 0;
    if(val==8) return 1;
    if(val==9) return 0;
    if(val==10) return 1;
    if(val==11) return 0;
    if(val==12) return 1;
    if(val==13) return 0;
    if(val==14) return 1;
    return 0;
}
vector<int> bfs(vector<int> adj[], int str, int fnd){
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
    int cur=fnd;
    vector<int> path;
    while(cur!=-1){
        path.push_back(cur);
        cur=par[cur];
    }
    reverse(path.begin(), path.end());
    return path;
}
