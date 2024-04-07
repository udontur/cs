#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,string> p,pair<int,string> q){
    if(p.first>q.first) return true;
    else if(p.first==q.first)
        if(p.second<q.second)
            return true;
    return false;
}
int main() {
    int n;
    pair<int, string> r[30001];
    cin >> n;
    for (int i =0; i<n; i++) cin >> r[i].second >> r[i].first;
    sort(r, r+n,cmp);
    for (int i =0; i<n; i++) cout << r[i].second << " " << r[i].first << "\n";
    return 0;
}
