#include <bits/stdc++.h>
using namespace std;
int func(vector<int>& v, int l, int r, int key) { 
    while(r-l>1){ 
        int m=l+(r-l)/2; 
        if(v[m]>=key) r=m; 
        else l=m; 
    } 
    return r; 
}
int find(vector<int>& v) {
    int len=1;
    vector<int> tail(v.size(), 0); 
    tail[0]=v[0]; 
    for(int i =1; i<v.size(); i++) { 
        if(v[i]<tail[0]) tail[0]=v[i]; 
        else if(v[i]>tail[len-1]) tail[len++]=v[i]; 
        else tail[func(tail, -1, len - 1, v[i])]=v[i]; 
    } 
    return len; 
} 
int main() { 
    int n, t, len =1;
    vector<int> v, tail(v.size(), 0);
    cin >> n;
    for(int i =0; i<n; i++){
        cin >>t;
        v.push_back(t);
    }
    t=find(v);
    cout << t;
    return 0; 
}
