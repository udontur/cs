#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, start, end, a, b, l;
    vector<pair<int, int>> adj[1001];
    vector <int> dis(1001, 1000001);
    vector <bool> vis(1001, false);
    vector <int> p(1001, -1); 
    priority_queue <pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
    cin >> n >> start >> end;
    while(true){
        cin >> a >> b >> l;
        if(a==0&&b==0&&l==0) break;
        adj[a].push_back(make_pair(b, l));
        adj[b].push_back(make_pair(a, l));
    }
    dis[start]=0;
    pq.push(make_pair(0, start));
    while(!pq.empty()){
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();
        if(vis[u]) continue;
        vis[u]=true;
        for(auto v:adj[u]){
            if(dis[v.first]>d+v.second){
                dis[v.first]=d+v.second;
                p[v.first]=u; 
                pq.push(make_pair(dis[v.first], v.first));
            }
        }
    }
    cout << dis[end] << endl;
    int cur=end;
    vector<int> path;
    while(cur!=-1) {
        path.push_back(cur);
        cur=p[cur];
    }
    reverse(path.begin(), path.end());
    for(int i =0;i<path.size();i++) {
        cout<< path[i]<< " ";
    }
    return 0;
}
