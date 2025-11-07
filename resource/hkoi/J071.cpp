#include <bits/stdc++.h>
#define int long long
using namespace std;
int bs(vector<int> arr, int l, int r, int x){
    while(l<=r) {
        int m=l+(r-l)/2;
        if (arr[m]==x) return m;
        if (arr[m]<x) l=m+1;
        else r=m-1;
    }
    return -1;
}
int32_t main(){
    int w, h, k;
    cin>>w>>h>>k;
    vector<pair<int, int>> node;
    set<int> xs, ys;
    for(int i =0; i<k; i++){
        int x, y;
        cin>>x>>y;
        node.push_back(make_pair(x, y));
        xs.insert(node[i].first);
        ys.insert(node[i].second);
    }
    xs.insert(0), xs.insert(w+1);
    ys.insert(0), ys.insert(h+1);
    vector<int> hor, ver;
    for(auto i: xs) hor.push_back(i);
    for(auto i: ys) ver.push_back(i);
    sort(hor.begin(), hor.end());
    sort(ver.begin(), ver.end());
    int horn=hor.size(), vern=ver.size(), mx=INT_MIN;
    for(int i =0; i<k; i++){
        pair<int, int> a=node[i];
        int hpos=bs(hor, 0, horn, a.first);
        int vpos=bs(ver, 0, vern, a.second);
        int curh=abs(hor[hpos-1]-hor[hpos+1])-1;
        int curv=abs(ver[vpos-1]-ver[vpos+1])-1;
        int cur=curh*curv;
        if(cur>mx) mx=cur;
    }
    cout<<mx;
    return 0;
}
