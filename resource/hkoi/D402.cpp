#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, m, ans=0;
    double val;
    string cd;
    unordered_map<string, int>a;
    cin >> n;
    while(n--){
        cin >> cd >> val;
        a[cd]=val*10;
    }
    cin >> m;
    while(m--){
        cin >> cd;
        ans+=a[cd];
    }
    cout << fixed << setprecision(1);
    cout << (double)ans/10.0;
}
