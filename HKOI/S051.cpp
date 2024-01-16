#include <bits/stdc++.h>
using namespace std;
int par[100001]{0};
int fnd(int x, bool vis[]){
    if(par[x]==0) return x;
    if(vis[x]||par[x]==x) return -1;
    vis[x]=1; 
    return par[x]=fnd(par[x], vis);
}
int main(){
    int n, m;
    cin>>n>>m;
    for(int i =0; i<m; i++){
        int x, y;
        cin>>x>>y;
        par[x]=y;
    }
    int q;
    cin>>q;
    int ans[100001]{0};
    for(int i =0; i<q; i++){
        int x;
        cin>>x;
        bool vis[100001]{0};
        int tmp=fnd(x, vis);
        if(tmp==-1) cout<<"Error\n";
        else cout<<tmp<<"\n";
        ans[x]=tmp;
    }
    return 0;
}
