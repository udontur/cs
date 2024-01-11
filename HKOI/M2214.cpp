#include <bits/stdc++.h>
using namespace std;
int main() {
    long long q, v, x, e, o=0, ans=0;
    multiset <long long> s;
    cin >> q;
    for(int i =0; i<q; i++){
        cin >> e;
        if(e==1){
            cin >> v;
            v-=o;
            s.insert(v);
        }else if(e==2){
            if(s.empty()) cout << "-1\n";
            else{
                auto itr=s.rbegin();
                cout << *itr+o << "\n";
                s.erase(s.find(*itr));
            }
        }else{
            cin >> x;
            o+=x;
            while(*s.begin()<-o){
                if(!s.empty()) s.erase(s.find(*s.begin()));
                else break;
            }
        }
    }
    while(!s.empty()&&*s.begin()<-o) s.erase(s.find(*s.begin()));
    for(auto itr=s.begin(); itr!=s.end(); itr++) ans+=*itr+o;
    cout << ans;
    return 0;
}
