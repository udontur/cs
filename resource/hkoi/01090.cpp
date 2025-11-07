#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    unordered_map<int, bool> m;
    cin >> n;
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        if(!m[x]){
            cout << "in\n";
            m[x]=1;
        }else{
            cout << "out\n";
            m[x]=0;
        }
    }
    return 0;
}
