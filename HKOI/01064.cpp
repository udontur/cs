#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, mx = 0;
    string dum;
    map<string, int> m;
    cin >> n;
    getline(cin,dum);
    for(int i =0; i<n; i++){
        string s;
        getline(cin, s);
        m[s]++;
    }
    for(auto it=m.begin(); it!=m.end(); it++)
        if(it->second>=mx)
            mx=it->second;
    for(auto it=m.begin(); it!=m.end();it++)
        if(it->second==mx)
            cout << it->first << "\n";
    return 0;
}
