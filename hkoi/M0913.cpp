#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c, x;
    multiset<int> an;
    vector<int> at, dn, dt;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> c;
        if(c==1){
            cin >> x;
            an.insert(x);
            at.push_back(x);
        }else if(c==2){
            cin >> x;
            dn.push_back(x);
            dt.push_back(x);
        }else if(c==3){
            for(auto itr=dt.begin(); itr!=dt.end(); itr++){
                auto it=find(at.begin(), at.end(), *itr);
                at.erase(it);
            }
            dt.clear();
            for(auto itr=at.begin(); itr!=at.end(); itr++) cout << *itr << " ";
            cout << "\n";
        }else if(c==4){
            for(auto itr=dn.begin(); itr!=dn.end(); itr++){
                auto it=an.find(*itr);
                an.erase(it);
            }
            dn.clear();
            for(auto itr=an.begin(); itr!=an.end(); itr++) cout << *itr << " ";
            cout << "\n";
        }
    }
    return 0;
}
