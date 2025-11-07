#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    pair<int, bool> a[21];
    unordered_map<int, bool> m;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> a[i].first;
        a[i].second=1;
    }
    for(int i =0; i<n; i++){
        if(!m.count(a[i].first)) m[a[i].first]=1;
        else a[i].second=0;
    }
    int ans=0;
    for(int i =0; i<n; i++)
        if(a[i].second)
            ans++;
    cout << ans << "\n";
    for(int i =0; i<n; i++)
        if(a[i].second)
            cout << a[i].first << " ";
    return 0;
}
