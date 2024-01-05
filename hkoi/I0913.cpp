#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, pair<int, int>>a, pair<int, pair<int, int>>b){
    if(a.second.first>b.second.first) return 1;
    else if(a.second.first==b.second.first)
        if(a.second.second>b.second.second) return 1;
        else if(a.second.second==b.second.second)
            if(a.first<=b.first) return 1;
    return 0;
}
int main() {
    int n, t, p, task[2001]{0}, con[2001][2001]{0};
    pair<int, pair<int, int>> scr[2001];
    cin>>n>>t>>p;
    for(int i =0; i<n; i++){
        scr[i].first=i;
        for(int j =0; j<t; j++){
            cin>>con[i][j];
            task[j]+=con[i][j];
        }
    }
    for(int i =0; i<t; i++) task[i]=n-task[i];
    
    for(int i =0; i<n; i++){
        int o=0;
        scr[i].second.first=0;
        for(int j =0; j<t; j++){
            if(con[i][j]){
                scr[i].second.first+=task[j];
                o++;
            }
        }
        scr[i].second.second=o;
    }
    sort(scr, scr+n, cmp);
    for(int i =0; i<n; i++){
        if(scr[i].first+1==p){
            cout<<scr[i].second.first<<" "<<i+1<<"\n";
            break;
        }
    }
    return 0;
}
