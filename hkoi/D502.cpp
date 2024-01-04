#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("weather.txt", "r", stdin);
    int mx=0, mn=100, x;
    string dum;
    while(!cin.eof()){
        cin.ignore(32);
        cin >> x;
        getline(cin, dum);
        mx=max(x, mx);
        mn=min(x, mn);
    }
    cout << mn << " " << mx;
    return 0;
}
