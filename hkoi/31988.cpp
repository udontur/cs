#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while(getline(cin, s)){
        int n=s.size();
        list<char> a;
        auto it=a.end();
        for(int i =0; i<n; i++){
            if(s[i]=='[') it=a.begin();
            else if(s[i]==']') it=a.end();
            else a.insert(it, s[i]);
        }
        for(auto i: a) cout<<i;
        cout<<"\n";
    }
    return 0;
}
