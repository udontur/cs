#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){return a.first.second<b.first.second;}
int main() {
    int n, ans[100001], o=1, prev=0;
    pair<pair<int, int>, int> a[100001];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second=i+1;
    }
    sort(a, a+n, cmp);
    ans[0]=a[0].second;
    for(int i =1; i<n; i++){
        if(a[i].first.first>=a[prev].first.second){
            ans[o]=a[i].second;
            prev=i;
            o++;
        }
    }
    cout << o << "\n";
    sort(ans, ans+o);
    for(int i =0; i<o; i++) cout << ans[i] << "\n";
    return 0;
}
