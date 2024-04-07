#include <bits/stdc++.h>
#define int long long
using namespace std;
bool cmp (pair<int,int>p, pair<int,int>q){return p.first*p.first+p.second*p.second<q.first*q.first+q.second*q.second;}
signed main() {
    int n;
    pair<int,int>a[1001];
    cin >> n;
    for(int i =0; i<n; i++) cin >> a[i].first >> a[i].second;
    sort(a, a+n,cmp);
    for(int i =0; i<n; i++) cout <<  a[i].first << " " <<  a[i].second << "\n";
    return 0;
}
