#include <bits/stdc++.h>
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
}
int main() {
    unordered_map<char, int> ind;
    ind['q']=1;ind['w']=2;ind['e']=3;ind['r']=4;ind['t']=5;ind['y']=6;ind['u']=7;ind['i']=8;ind['o']=9;ind['p']=10;ind['a']=11;ind['s']=12;ind['d']=13;ind['f']=14;ind['g']=15;ind['h']=16;ind['j']=17;ind['k']=18;ind['l']=19;ind['z']=20;ind['x']=21;ind['c']=22;ind['v']=23;ind['b']=24;ind['n']=25;ind['m']=26;
    vector<int> adj[201];
    adj[1].push_back(2);adj[2].push_back(1);adj[1].push_back(11);adj[11].push_back(1);adj[2].push_back(11);adj[11].push_back(2);adj[2].push_back(12);adj[12].push_back(2);adj[2].push_back(3);adj[3].push_back(2);adj[3].push_back(12);adj[12].push_back(3);adj[3].push_back(13);adj[13].push_back(3);adj[3].push_back(4);adj[4].push_back(3);adj[4].push_back(13);adj[13].push_back(4);adj[4].push_back(14);adj[14].push_back(4);adj[4].push_back(5);adj[5].push_back(4);adj[5].push_back(14);adj[14].push_back(5);adj[5].push_back(15);adj[15].push_back(5);adj[5].push_back(6);adj[6].push_back(5);adj[6].push_back(15);adj[15].push_back(6);adj[6].push_back(16);adj[16].push_back(6);adj[6].push_back(7);adj[7].push_back(6);adj[7].push_back(16);adj[16].push_back(7);adj[7].push_back(17);adj[17].push_back(7);adj[7].push_back(8);adj[8].push_back(7);adj[8].push_back(17);adj[17].push_back(8);adj[8].push_back(18);adj[18].push_back(8);adj[8].push_back(9);adj[9].push_back(8);adj[9].push_back(18);adj[18].push_back(9);adj[9].push_back(19);adj[19].push_back(9);adj[9].push_back(10);adj[10].push_back(9);adj[10].push_back(19);adj[19].push_back(10);adj[11].push_back(12);adj[12].push_back(11);adj[11].push_back(20);adj[20].push_back(11);adj[12].push_back(20);adj[20].push_back(12);adj[12].push_back(21);adj[21].push_back(12);adj[12].push_back(13);adj[13].push_back(12);adj[13].push_back(21);adj[21].push_back(13);adj[13].push_back(22);adj[22].push_back(13);adj[13].push_back(14);adj[14].push_back(13);adj[14].push_back(22);adj[22].push_back(14);adj[14].push_back(23);adj[23].push_back(14);adj[14].push_back(15);adj[15].push_back(14);adj[15].push_back(23);adj[23].push_back(15);adj[15].push_back(24);adj[24].push_back(15);adj[15].push_back(16);adj[16].push_back(15);adj[16].push_back(24);adj[24].push_back(16);adj[16].push_back(25);adj[25].push_back(16);adj[16].push_back(17);adj[17].push_back(16);adj[17].push_back(25);adj[25].push_back(17);adj[17].push_back(26);adj[26].push_back(17);adj[17].push_back(18);adj[18].push_back(17);adj[18].push_back(26);adj[26].push_back(18);adj[18].push_back(19);adj[19].push_back(18);adj[20].push_back(21);adj[21].push_back(20);adj[21].push_back(22);adj[22].push_back(21);adj[22].push_back(23);adj[23].push_back(22);adj[23].push_back(24);adj[24].push_back(23);adj[24].push_back(25);adj[25].push_back(24);adj[25].push_back(26);adj[26].push_back(25);
    string s1, s2;
    cin>>s1>>s2;
    int n=s1.length(), ans=0;
    for(int i =0; i<n; i++){
        if(s1[i]==s2[i]) continue;
        int a=ind[s1[i]], b=ind[s2[i]];
        ans+=bfs(adj, a, b);
    }
    cout<<ans;
    return 0;
}
