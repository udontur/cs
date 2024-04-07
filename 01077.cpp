#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, st, cr;
    string c;
    set <int> crs[100001], sts[100001];
    cin >> n >> n >> n;
    for(int i =0; i<n; i++){
        cin >> c;
        if(c=="ADD"){
            cin >> cr >> st;
            crs[cr].insert(st);
            sts[st].insert(cr);
        }else if(c=="DROP"){
            cin >> cr >> st;
            crs[cr].erase(st);
            sts[st].erase(cr);
        }else if(c=="PRINTC"){
            cin >> st;
            if(sts[st].empty()) cout << "NIL" << "\n";
            else {
                for (auto itr : sts[st]) cout << itr << " ";
                cout << "\n";
            }
        }else if(c=="PRINTS"){
            cin >> cr;
            if(crs[cr].empty()) cout << "NIL" << "\n";
            else {
                for (auto itr : crs[cr]) cout << itr << " ";
                cout << "\n";
            }
        }
    }
    return 0;
}
