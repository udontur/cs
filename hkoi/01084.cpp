#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, b;
    vector<int>v;
    cin >> n;
    for(int i =1; i<=n; i++) v.push_back(i);
    for(int i =0; i<n-1; i++){
        cout << "Q " << v[0] << " " << v[1] << endl;
        cin >> b;
        if(b) v.erase(v.begin());
        else v.erase(v.begin()+1);
    }
    cout << "A " << v[0] << endl;
    return 0;
}
