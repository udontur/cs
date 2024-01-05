#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c, x;
    multiset<int> s;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> c;
        if(c==1)
            cin>>x, s.insert(x);
        else if(c==2)
            if(s.empty()) cout<<"-1"<<"\n";
            else cout<<*s.begin()<<"\n";
        else if(c==3)
            if(s.empty()) cout<<"-1"<<"\n";
            else cout<<*s.rbegin()<<"\n";
        else if(c==4) s.erase(s.begin());
        else if(c==5) s.erase(--s.end());
    }
    return 0;
}
