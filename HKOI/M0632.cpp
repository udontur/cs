#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p,pair<int,int> q){return p.first*q.second<q.first*p.second;}
int main() {
    int n, cost=0, o=0;
    pair<int,int> a[201];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,cmp);
    for(int i =0; i<n; i++){
        o+=a[i].first;
        cost+=o*a[i].second;
    }
    cout << cost;
    return 0;
}
