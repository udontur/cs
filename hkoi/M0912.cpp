#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a,pair<int, int> b){return a.second<b.second;}
void sm(map<int, int>& m){
    vector<pair<int, int>> a;
    for(auto& it: m) a.push_back(it);
    sort(a.begin(), a.end(), cmp);
    cout << a.rbegin()->first << " ";
}
int main() {
    int n, m, t, v;
    cin >>n>> m;
    if(m>n) v=m;
    else v=n;
    vector<map<int,int>> f(v);
    for(int i =0; i<n; i++)
        for(int j =0; j<m; j++)
            cin >> t, f[j][t]++;
    for(int i =0; i<m; i++) sm(f[i]);
    return 0;
}
